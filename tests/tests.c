/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:36:24 by aprosper          #+#    #+#             */
/*   Updated: 2022/01/11 11:58:05 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_1_ft_printf(void)
{
	char			c = 'C';
	char			z = 'Z';
	char			*s = "salut";
	char			*s_1 = "hello";
	int				i = 6789;
	unsigned int 	u = 12345;
	int				d = 123456789;
	char			*p = "coucou";
	int				x = 9945;
	int				x_maj = 9945;
	int				x_maj2 = 9945;
	int				x_2 = 9945;

	ft_printf("resultat : s = %s | z = %c | s_1 = %s | i = %i | u = %u | t = %% | d = %d | x_maj = %X | c = %c | x = %x | x_maj2 = %X | x_2 = %x | p = %p\n", s, z, s_1, i, u, d, x_maj, c, x_maj2, x_2, p);
}

void	test_2_ft_printf(void)
{
	int		a1 = 123;
	int		b1 = 789;
	char	c1 = 'Z';
	int		i1 = 5555;
	char	*s1 = "salut";
	char	*str1 = "hello";
	int		x1 = 9945;
	char	*p1 = "lalalala";

	int	z1 = printf("a1 = %d | t1 = %% | s1 = %s | c1 = %c | b1 = %d | i1 = %i | str1 = %s | x1 = %x | p1 = %p\n", a1, s1, c1, b1, i1, str1, x1, p1);
	printf("printf return = %d\n", z1);

	int		a2 = 123;
	int		b2 = 789;
	char	c2 = 'Z';
	int		i2 = 5555;
	char	*s2 = "salut";
	char	*str2 = "hello";
	int		x2 = 9945;
	char	*p2 = "lalalala";

	int	z2 = ft_printf("a2 = %d | t2 = %% | s2 = %s | c2 = %c | b2 = %d | i2 = %i | str2 = %s | x2 = %x | p2 = %p\n", a2, s2, c2, b2, i2, str2, x2, p2);
	ft_printf("ft_printf return = %d\n", z2);
//	ft_printf("a2 = %d | t2 = %% | s2 = %s | c2 = %c | b2 = %d | i2 = %i | str2 = %s | x2 = %x | p2 = %p\n", a2, s2, c2, b2, i2, str2, x2, p2);
}

void	test_1_percent_c(void)
{
	printf("\n----test_percent_c----\n");
	
	printf("PRINTF :\n");
//	int z1 = printf("%c\n", '0');
//	int z2 = printf(" %c \n", '0');
	int z3 = printf(" %c %c %c ", '1', '2', '3');
//	printf("z1 = %d\n", z1);
//	printf("z2 = %d\n", z2);
	
	printf("\nFT_PRINTF :\n");
//	int z4 = ft_printf("%c\n", '0');
//	int z5 = ft_printf(" %c \n", '0');
	int z6 = ft_printf(" %c %c %c ", '1', '2', '3');
//	printf("z4 = %d\n", z4);
//	printf("z5 = %d\n", z5);
	printf("printf = %d | ft_printf = %d\n", z3, z6);
}

void	test_1_percent_prct(void)
{
	int z1 = printf("z1 = %% %% %%");
	printf("\n");
	int z2 = ft_printf("z2 = %% %% %%");
	printf("\nprintf = %d | ft_printf = %d\n", z1, z2);
}

void	test_1_percent_s(void)
{
	printf("\n----test_2_percent_s----\n");
	
	int z1 = printf("z1 = %s %s %s", "salut", "salutation", "coucou");
	printf("\n");
	int z2 = ft_printf("z2 = %s %s %s", "salut", "salutation", "coucou");
	printf("\nprintf = %d | ft_printf = %d\n", z1, z2);
}

void	test_2_percent_s(void)
{
	printf("----- PRINTF : -----\n");
//	int	z1 = printf(" %s ", "");
	int	z2 = printf(" %s ", "-");
//	int	z3 = printf(" %s %s ", "", "-");
//	int	z4 = printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
//	printf("z1 = %d\n", z1);
	printf("z2 = %d\n", z2);
//	printf("z3 = %d", z3);
//	printf("z4 = %d\n", z4);
	
	printf("\n----- FT_PRINTF : -----\n");
//	int	z5 = ft_printf(" %s ", "");
	int	z6 = ft_printf(" %s ", "-");
//	int	z7 = ft_printf(" %s %s ", "", "-");
//	int	z8 = ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
//	printf("z5 = %d\n", z5);
	printf("z6 = %d\n", z6);
//	printf("z7 = %d\n", z7);
//	printf("z8 = %d\n", z8);
}

void	test_1_percent_d(void)
{

	int z1 = printf(" %d ", 0);
	int	z2 = ft_printf(" %d ", 0);
	printf("\nAvec 0 : printf(z1) = %d | ft_printf(z2) = %d\n", z1, z2);
	
	int	z3 = printf(" %d ", -1);
	int	z4 = ft_printf(" %d ", -1);
	printf("\nAvec -1 : printf(z3) = %d | ft_printf(z4) = %d\n", z3, z4);

	int	z7 = printf(" %d ", -9);
	int	z8 = ft_printf(" %d ", -9);
	printf("\nAvec -9 : printf(z7) = %d | ft_printf(z8) = %d\n", z7, z8);

	int z5 = printf(" %d ", 9);
	int z6 = ft_printf(" %d ", 9);
	printf("\nAvec 9 : printf(z5) = %d | ft_printf(z6) = %d\n", z5, z6);

	int z10 = printf(" %d ", 101);
	int z11 = ft_printf(" %d ", 101);
	printf("\nAvec 101 : printf(z10) = %d | ft_printf(z11) = %d\n", z10, z11);
}

void	test_1_percent_u(void)
{
	int	z3 = printf(" %u ", 1);
	int	z4 = ft_printf(" %u ", 1);
	printf("\nAvec 1 : printf = %d | ft_printf = %d\n", z3, z4);

	int	z5 = printf(" %u ", 9);
	int	z6 = ft_printf(" %u ", 9);
	printf("\nAvec 9 : printf = %d | ft_printf = %d\n", z5, z6);

	int z7 = printf(" %u ", 15);
	int z8 = ft_printf(" %u ", 15);
	printf("\nAvec 15 : printf = %d | ft_printf = %d\n", z7, z8);

	int z10 = printf(" %u ", 101);
	int z11 = ft_printf(" %u ", 101);
	printf("\nAvec 101 : printf = %d | ft_printf = %d\n", z10, z11);
	
	printf("\n");
	
	int z1 = printf(" %u ", 0);
	int	z2 = ft_printf(" %u ", 0);
	printf("\nAvec 0 : printf = %d | ft_printf = %d\n", z1, z2);
	
	int z12 = printf(" %u ", -1);
	int z13 = ft_printf(" %u ", -1);
	printf("\nAvec -1 : printf = %d | ft_printf = %d\n", z12, z13);
	
	int z14 = printf(" %u ", -9);
	int z15 = ft_printf(" %u ", -9);
	printf("\nAvec -9 : printf = %d | ft_printf = %d\n", z14, z15);
	
	int z16 = printf(" %u ", -15);
	int z17 = ft_printf(" %u ", -15);
	printf("\nAvec -15 : printf = %d | ft_printf = %d\n", z16, z17);

	int z18 = printf(" %u ", -101);
	int z19 = ft_printf(" %u ", -101);
	printf("\nAvec -101 : printf = %d | ft_printf = %d\n", z18, z19);	
}

void	test_1_percent_x(void)
{
/*	int	z3 = printf(" %x ", 1);
	int	z4 = ft_printf(" %x ", 1);
	printf("\nAvec 1 : printf = %d | ft_printf = %d\n", z3, z4);

	int	z5 = printf(" %x ", 9);
	int	z6 = ft_printf(" %x ", 9);
	printf("\nAvec 9 : printf = %d | ft_printf = %d\n", z5, z6);

	int z7 = printf(" %x ", 15);
	int z8 = ft_printf(" %x ", 15);
	printf("\nAvec 15 : printf = %d | ft_printf = %d\n", z7, z8);

	int z10 = printf(" %x ", 101);
	int z11 = ft_printf(" %x ", 101);
	printf("\nAvec 101 : printf = %d | ft_printf = %d\n", z10, z11);
	
	printf("\n");*/
	
	int z1 = printf(" %x ", 0);
	int	z2 = ft_printf(" %x ", 0);
	printf("\nAvec 0 : printf = %d | ft_printf = %d\n", z1, z2);
	
	int z12 = printf(" %x ", -1);
	int z13 = ft_printf(" %x ", -1);
	printf("\nAvec -1 : printf = %d | ft_printf = %d\n", z12, z13);

	int z14 = printf(" %x ", -9);
	int z15 = ft_printf(" %x ", -9);
	printf("\nAvec -9 : printf = %d | ft_printf = %d\n", z14, z15);

	int z16 = printf(" %x ", -15);
	int z17 = ft_printf(" %x ", -15);
	printf("\nAvec -15 : printf = %d | ft_printf = %d\n", z16, z17);

	int z18 = printf(" %x ", -101);
	int z19 = ft_printf(" %x ", -101);
	printf("\nAvec -101 : printf = %d | ft_printf = %d\n", z18, z19);
}

void	test_1_percent_p(void)
{
/*	int	z5 = printf(" %p ", 1);
	int	z6 = ft_printf(" %p ", 1);
	printf("\nAvec 1 : printf = %d | ft_printf = %d\n", z5, z6);

	int z7 = printf("pr = %p ", 15);
	int z8 = ft_printf("ft = %p ", 15);
	printf("\nAvec 15 : printf = %d | ft_printf = %d\n", z7, z8);

	int z10 = printf(" %p ", 16);
	int z11 = ft_printf(" %p ", 16);
	printf("\nAvec 16 : printf = %d | ft_printf = %d\n", z10, z11);

	int z1 = printf(" %p ", 17);
	int	z2 = ft_printf(" %p ", 17);
	printf("\nAvec 17 : printf = %d | ft_printf = %d\n", z1, z2);
	
	printf("\n");

	int z12 = printf("pr = %p %p ", 0, 0);
	printf("\n");
	int z13 = ft_printf("ft = %p %p ", 0, 0);
	printf("\nAvec 0 : printf = %d | ft_printf = %d\n", z12, z13);
	
	int	z20 = printf(" %p ", -1);
	int	z21 = ft_printf(" %p ", -1);
	printf("\nAvec -1 : printf = %d | ft_printf = %d\n", z20, z21);
	
	int z22 = printf("pr = %p %p ", 0, 0);
	printf("\n");
	int	z23 = ft_printf("ft = %p %p ", 0, 0);
	printf("\nTest6 LONG_MIN, LONG_MAX : printf = %d | ft_printf = %d\n", z22, z23);

	int z24 = printf(" %p %p ", INT_MIN, INT_MAX);
	printf("\n");
	int	z25 = ft_printf(" %p %p ", INT_MIN, INT_MAX);
	printf("\nTest7 INT_MIN, INT_MAX : printf = %d | ft_printf = %d\n", z24, z25);

	int z26 = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf("\n");
	int	z27 = ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf("\nTest8 ULONG_MAX, -ULONG_MAX : printf = %d | ft_printf = %d\n", z26, z27);*/
}

void	test_1_mix(void)
{
	int z10 = printf("pr = %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n");
	int z11 = ft_printf("ft = %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\nprintf = %d | ft_printf = %d\n", z10, z11);

	int z1 = printf("pr = %% %c", 'A');
	printf("\n");
	int z2 = ft_printf("ft = %% %c", 'A');
	printf("\nprintf = %d | ft_printf = %d\n", z1, z2);

	int z3 = printf("pr = %c | %s | %d | %%%% | %i | %u | %x | %X | %p", 'A', "string", 42, 43, 44, 12345, 12345, "pointeur");
	printf("\n");
	int z4 = ft_printf("ft = %c | %s | %d | %%%% | %i | %u | %x | %X | %p", 'A', "string", 42, 43, 44, 12345, 12345, "pointeur");
	printf("\nprintf = %d | ft_printf = %d\n", z3, z4);

	int z5 = printf("pr = %c | %s | %d | %%%% | %i | %u", 'A', "string", 42, 43, 44);
	printf("\n");
	int z6 = ft_printf("ft = %c | %s | %d | %%%% | %i | %u", 'A', "string", 42, 43, 44);
	printf("\nprintf = %d | ft_printf = %d\n", z5, z6);

	int z7 = printf("%c | %s | %% | %d", 'A', "string", 42);
	printf("\n");
	int z8 = ft_printf("%c | %s | %% | %d", 'A', "string", 42);
	printf("\nprintf = %d | ft_printf = %d\n", z7, z8);
}
