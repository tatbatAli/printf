/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:54:05 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/06 11:32:18 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_project/libft.h"

int ft_char_handler(va_list *args, int count)
{
    char    c;
    
    c = va_arg(*args, int);
    ft_putchar_fd(c , 1);
    count++;
    return (count);
}