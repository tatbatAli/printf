/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:01:42 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/06 14:58:29 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void parse_flags(const char *format , int *i , t_flags *flags, int count)
{
    char *str;
    
    if (!format)
        return ;
    str = "-+0#";
    initialize_flags(flags);
    while (format[*i] != '\0' && ft_strchr(str, format[*i]))
    {
  
        if (format[*i] == '+')
            flags->plus_flag = 1;
        else if (format[*i] == ' ')
            flags->space_flag = 1;
        else if (format[*i] == '#')
        {
            flags->hexa_flag = 1;
        }
        (*i)++;
    }

}