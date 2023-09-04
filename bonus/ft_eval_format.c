/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:26:39 by leduard2          #+#    #+#             */
/*   Updated: 2023/09/04 20:46:04 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_eval_format(t_format *flags, char *format, int i)
{
	while (!is_normal_flag(format[i]))
	{
		if (format[i] == '.')
			flags->pnt += 1;
		else if (format[i] == '-')
			flags->dash += 1;
		else if (format[i] == '0')
			flags->zero += 1;
		else if (format[i] == '#')
			flags->hash += 1;
		else if (format[i] == ' ')
			flags->sp += 1;
		else if (format[i] == '+')
			flags->sign += 1;
		i++;
	}
	return (i);
}

int	is_normal_flag(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_print_format(char c, t_format *flags)
{
	int	count;

	count = 0;

	if (c == 'c')
		return (ft_princ_char(flags));
	else if (c == 's')
		return (ft_print_str(flags));
	else if (c == 'i' || c == 'd')
		return (ft_print_digit((long)va_arg(flags->ap, int)));
	// else if (c == 'x')
	// 	return (ft_print_digit((long)va_arg(flags->ap, unsigned int), 16, LOWER_CASE));
	// else if (c == 'X')
	// 	return (ft_print_digit((long)va_arg(flags->ap, unsigned int), 16, UPPER_CASE));
	// else if (c == 'p')
	// 	return (ft_print_pointer((unsigned long)va_arg(flags->ap, unsigned long), 16,
	// 			POINTER_CASE));
	// else if (c == 'u')
	// 	return (ft_print_digit((long)va_arg(flags->ap, unsigned int), 10, LOWER_CASE));
	// else if (c == '%')
	// 	return (ft_princ_char('%'));
	return (count);
}