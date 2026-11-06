/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:40:12 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/06 14:58:16 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    int i;
    int count;
    va_list args;
    t_flags flags;

    if (!format)
        return (-1);
    va_start(args , format);
    i = 0;
    count = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            parse_flags(format , &i, &flags, count);
            if (format[i] == 's')
                count = ft_string_handler(&args, count);
            else if (format[i] == 'd' || format[i] == 'i')
                count = ft_decimal_handler(&args, count);
            else if (format[i] == 'c')
                count = ft_char_handler(&args, count);
            else if (format[i] == 'u')
                count = ft_unsigned_handler(&args, count);
            else if (format[i] == 'x' || format[i] == 'X')
                count = ft_hexa_handler(format[i], &args, count);
            else if  (format[i] == 'p')
                count = ft_address_handler(&args, count);
            else if (format[i] == '%')
                count = ft_percentage_handler(count);
            i++;
        }
        else{
            ft_putchar_fd(format[i], 1);
            i++;
            count++;
        }
    }
    va_end(args);
    return (count);
}