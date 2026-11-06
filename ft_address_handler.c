/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address_handler.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:21:10 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/06 11:24:07 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_project/libft.h"

int ft_address_handler(va_list *args, int count)
{
    unsigned long x = (unsigned long)va_arg(*args, void *);
    if (x == 0)
    {
        ft_putstr_fd("(nil)", 1);
        count += ft_strlen("(nil)\n");
        return (count);
    }
    ft_putstr_fd("0x", 1);
    ft_puthexa(x , 'x');
    count += ft_hexa_len(x);
    count += 2;
    return (count);
}