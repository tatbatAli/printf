/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 08:53:47 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/04 09:08:55 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    initialize_flags(t_flags *flags)
{
    flags->hexa_flag = 0;
    flags->minus_flag = 0;
    flags->plus_flag = 0;
    flags->presicion_flag = 0;
    flags->space_flag = 0;
    flags->zero_flag = 0;
    flags->width_flag = 0;
}