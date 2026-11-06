/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 08:20:38 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/06 14:58:10 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft_project/libft.h"
# include <stdio.h>

typedef struct s_flags
{
    int plus_flag;
    int space_flag;
    int hexa_flag;
} t_flags;


int ft_printf(const char *format, ...);
int ft_int_len(int nb);
void    ft_put_unsignedint(unsigned int n);
unsigned int    ft_unsignedint_len(unsigned int n);
void    parse_flags(const char *format , int *i , t_flags *flags, int count);
void    initialize_flags(t_flags *flags);
void    ft_puthexa(unsigned long , char c);
int ft_hexa_len(int n);
int ft_string_handler(va_list *args, int count);
int ft_decimal_handler(va_list *args, int count);
int ft_char_handler(va_list *args, int count);
int ft_unsigned_handler(va_list *args, int count);
int ft_hexa_handler(const char format_char, va_list *args, int count);
int ft_address_handler(va_list *args, int count);
int ft_percentage_handler(int count);
#endif