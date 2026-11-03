/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:40:12 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/03 17:26:53 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../circle0/libft.h"
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
    int i;
    int n;
    int count;
    char c;
    va_list arg;
    t_flags flags;
    va_start(arg , format);
    
    i = 0;
    count = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            parse_flags(format , &i, flags);
            return (i);
            if (format[i] == 'c')
            {
                
                c = va_arg(arg, int);
                ft_putchar_fd(c , 1);
                count++;
            }
            else if (format[i] == 'd' || format[i] == 'i')
            {
                n = va_arg(arg, int);
                count = ft_number_len(n);
                ft_putnbr_fd(n , 1);
            }
            i += 2;
        }else{
            ft_putchar_fd(format[i], 1);
            i++;
            count++;
        }
    }
    va_end(arg);
    return (i);
}