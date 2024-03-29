/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:33:43 by leduard2          #+#    #+#             */
/*   Updated: 2023/09/14 16:01:31 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_print_str(t_format *flags)
{
	char	*str;
	int		i;
	int		count;

	str = va_arg(flags->ap, char *);
	i = 0;
	count = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i])
		count += write(1, &str[i++], 1);
	return (count);
}
