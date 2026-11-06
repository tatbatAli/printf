/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:00:12 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/06 11:19:44 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexa_handler(const char format_char, va_list *args, int count)
{
    int n;
    
    n = va_arg(*args, unsigned int);
    ft_puthexa(n, format_char);
    count += ft_hexa_len(n);
    return (count);
}