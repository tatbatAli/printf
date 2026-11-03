/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatbat <atatbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 08:20:38 by atatbat           #+#    #+#             */
/*   Updated: 2026/11/03 15:44:00 by atatbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

typedef struct s_flags
{
    int width_flag;
    int minus_flag;
    int zero_flag;
    int presicion_flag;
    int plus_flag;
    int space_flag;
    int hexa_flag;
} t_flags;


int ft_printf(const char *format, ...);
int ft_number_len(int nb);

#endif