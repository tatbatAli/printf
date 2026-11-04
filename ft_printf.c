/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:40:12 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/04 15:32:19 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int ft_printf(const char *format, ...)
{
    int i;
    int n;
    int count;
    char c;
    char *str;
    va_list arg;
    t_flags flags;

    if (!format)
        return (-1);
    va_start(arg , format);
    i = 0;
    count = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            parse_flags(format , &i, &flags);
            if (format[i] == 's')
            {
                str = va_arg(arg, char *);
                if (!str)
                {
                    ft_putstr_fd("(null)\n", 1);
                    count += ft_strlen("(null)\n");
                    return (count);
                }
                count += ft_strlen(str);
                ft_putstr_fd(str, 1);
            }
            else if (format[i] == 'd' || format[i] == 'i')
            {
                n = va_arg(arg, int);
                ft_putnbr_fd(n , 1);
                count += ft_int_len(n);
            }else if (format[i] == 'c')
            {
                c = va_arg(arg, int);
                ft_putchar_fd(c , 1);
                count++;
            }else if (format[i] == 'u')
            {
                n = va_arg(arg, unsigned int);
                ft_put_unsignedint(n);
                count += ft_unsignedint_len(n);
            }else if (format[i] == 'x' || format[i] == 'X')
            {
                n = va_arg(arg, unsigned int);
                ft_puthexa(n, format[i]);
                count += ft_hexa_len(n);
            }else if  (format[i] == 'p')
            {
                
            }
            i++;
        }else{
            ft_putchar_fd(format[i], 1);
            i++;
            count++;
        }
    }
    va_end(arg);
    return (count);
}