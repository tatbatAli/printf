/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_handler.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:57:27 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/06 11:24:31 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_unsigned_handler(va_list *args, int count)
{
    int n;
    
    n = va_arg(*args, unsigned int);
    ft_put_unsignedint(n);
    count += ft_unsignedint_len(n);
    return (count);
}