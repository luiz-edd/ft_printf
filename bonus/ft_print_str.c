/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:33:43 by leduard2          #+#    #+#             */
/*   Updated: 2023/09/04 20:41:31 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(t_format *flags)
{
	char *str;
	int i;
	int count;
	str = va_arg(flags->ap, char *);
	i = 0;
	count = 0;
	while (str[i])
		count += write(1, &str[i], 1);
	return (count);
}