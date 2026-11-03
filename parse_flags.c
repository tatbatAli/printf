/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:01:42 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/03 17:03:24 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../circle0/libft.h"
void parse_flags(char *format , int *i , t_flags *flags)
{
    char *str;
    
    str = "-+0#";
    while (format[*i] != '\0' && ft_strchr(str, format[*i]))
    {
        if (format[*i] == '-')
            flags->minus_flag = 1;
        else if (format[*i] == '+')
            flags->plus_flag = 1;
        else if (format[*i] == '0')
            flags->zero_flag = 1;
        else if (format[*i] == ' ')
            flags->space_flag = 1;
        else if (format[*i] == '#')
            flags->hexa_flag = 1;
        (*i)++;
    }
    while (ft_isdigit(format[(*i)]))
    {
        flags->width_flag = (flags->width_flag * 10) + (format[*i] - '0');
        (*i)++;
    }
    if (format[*i] == '.')
    {
        flags->presicion_flag = 0;
        (*i)++;
        while (ft_isdigit(format[(*i)]))
        {
            flags->presicion_flag = (flags->presicion_flag * 10) + (format[*i] - '0');
            (*i)++;
        }
    }

}