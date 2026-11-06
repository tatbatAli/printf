/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:36:47 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/06 11:33:24 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_project/libft.h"

int ft_string_handler(va_list *args, int count)
{
    char *str;
    
    str = va_arg(*args, char *);
    if (!str)
    {
        ft_putstr_fd("(null)\n", 1);
        count += ft_strlen("(null)\n");
        return (count);
    }
    count += ft_strlen(str);
    ft_putstr_fd(str, 1);
    return (count);
}