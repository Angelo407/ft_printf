NAME		= libftprintf.a
LIBFT		= libft
LIBFT_LIB	= libft.a

SRCS =	\
	ft_printf.c	\
	ft_prct_c_prct_s_to_str.c	\
	ft_prct_d_i_u_to_str.c	\
	ft_prct_x_xmaj_p_to_str.c	\
	ft_dec_to_hexa.c	\
	ft_dec_to_hexa_maj.c	\
	ft_putptr.c	\
	ft_itoa_char_hexa.c	\
	ft_nbrlen_variants.c


OBJS		= $(SRCS:.c=.o)
INCS		= .
RM			= rm -f
LIBC		= ar rc
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME) : $(OBJS)
	make all -C $(LIBFT)
	cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
	$(LIBC) $(NAME) $(OBJS)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT)

clean :
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re : fclean all