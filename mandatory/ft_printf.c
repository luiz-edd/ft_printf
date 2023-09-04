/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:21:55 by leduard2          #+#    #+#             */
/*   Updated: 2023/09/04 14:12:34 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char c, va_list ap)
{
	int	count;

	count = 0;

	if (c == 'c')
		return (ft_princ_char(va_arg(ap, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(ap, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_print_digit((long)va_arg(ap, int), 10, LOWER_CASE));
	else if (c == 'x')
		return (ft_print_digit((long)va_arg(ap, unsigned int), 16, LOWER_CASE));
	else if (c == 'X')
		return (ft_print_digit((long)va_arg(ap, unsigned int), 16, UPPER_CASE));
	else if (c == 'p')
		return (ft_print_pointer((unsigned long)va_arg(ap, unsigned long), 16,
				POINTER_CASE));
	else if (c == 'u')
		return (ft_print_digit((long)va_arg(ap, unsigned int), 10, LOWER_CASE));
	else if (c == '%')
		return (ft_princ_char('%'));
	return (count);
}




int	ft_printf(const char *format, int num, ...)
{
	int		count;
	va_list	ap;
	int		i;

	count = 0;
	i = 0;
	va_start(ap, num);
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_print_format(format[++i], ap);
		else
			count += ft_princ_char(format[i]);
		i++;
	}
	return (count);
}
