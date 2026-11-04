/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsignedint.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:58:58 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/04 13:47:23 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void ft_put_unsignedint(unsigned int nb)
{
    char res;
    
    if (nb >= 10)
        ft_put_unsignedint(nb / 10);
    res = (nb % 10) + '0';
    ft_putchar_fd(res, 1); 
}