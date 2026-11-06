/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_handler.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:45:23 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/06 11:32:45 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include "libft_project/libft.h"

int ft_decimal_handler(va_list *args, int count)
{
    int n;
    
    n = va_arg(*args, int);
    ft_putnbr_fd(n , 1);
    count += ft_int_len(n);
    return (count);
}