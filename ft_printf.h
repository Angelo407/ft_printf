/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:20:34 by aprosper          #+#    #+#             */
/*   Updated: 2022/02/25 09:53:42 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_dec_to_hexa(unsigned int nb);
int		ft_dec_to_hexa_maj(unsigned int nb);
int		ft_dec_to_hexa_p(unsigned long long int nb);
size_t	ft_nbrlen(int nb);
size_t	ft_nbrlen_plus(unsigned int nb);
size_t	ft_nbrlen_hexa(unsigned int nb);
size_t	ft_nbrlen_hexa_p(unsigned long long int nb);
char	ft_itoa_char_hexa(int nbr);
int		ft_putptr(unsigned long long int nb);
int		ft_prct_c_prct_to_str(char *str, int idx, va_list ap);
int		ft_prct_s_to_str(char *str, int idx, va_list ap);
int		ft_prct_d_i_u_to_str(char *str, int idx, va_list ap);
int		ft_prct_x_xmaj_p_to_str(char *str, int idx, va_list ap);

#endif