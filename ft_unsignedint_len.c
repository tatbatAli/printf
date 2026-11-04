/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedint_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:58:04 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/04 15:08:15 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

unsigned int ft_unsignedint_len(unsigned int nb)
{
    unsigned int len;

    len = 0;
    if (nb == 0)
        return (1);
    while (nb != 0)
    {
        nb /= 10;
        len++;
    }
    printf("len : %d\n" , len);
    return (len);
}