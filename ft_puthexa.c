/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:56:39 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/05 12:13:00 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_puthexa(unsigned long nb, char c)
{
    char *hexa_representation;
    char *HEXA_reperesntation;
    unsigned int len;
    
    len = 16;
    hexa_representation = "0123456789abcdef";
    HEXA_reperesntation = "0123456789ABCDEF";
    if (nb >= len)
        ft_puthexa(nb / len , c);
    if (c == 'x')
    {
        ft_putchar_fd(hexa_representation[nb % len], 1);
        return ;
    }else{
        ft_putchar_fd(HEXA_reperesntation[nb % len], 1);
    }
}