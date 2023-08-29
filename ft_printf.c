/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:21:55 by leduard2          #+#    #+#             */
/*   Updated: 2023/08/28 21:00:20 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_princ_char(int n)
{
	write(1, &n, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
		count += ft_princ_char((int)str[i++]);
	return (count);
}

int	ft_print_digit(long n, int base, char flag_type)
{
	int		count;
	char	*symbols;
	char	*symbols_up;

	count = 0;
	symbols = "0123456789abcdef";
	symbols_up = "0123456789ABCDEF";
	if (flag_type == POINTER_CASE)
	{
		write(1,"0x",2);
		return (ft_print_digit(n, base, LOWER_CASE) + 2);
	}
	else if (n < 0)
	{
		ft_princ_char('-');
		return (ft_print_digit(-n, base, flag_type) + 1);
	}
	else if (n < base)
	{
		if (flag_type == UPPER_CASE)
			return (ft_princ_char(symbols_up[n]));
		return (ft_princ_char(symbols[n]));
	}
	else
	{
		count = ft_print_digit(n / base, base, flag_type);
		return (count + ft_print_digit(n % base, base, flag_type));
	}
	return (0);
}

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
		return (ft_print_digit((long)va_arg(ap, unsigned int), 16,
				POINTER_CASE));
	else if (c == 'u')
		return (ft_print_digit((long)va_arg(ap, unsigned int), 10,
				LOWER_CASE));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;
	int		i;

	count = 0;
	i = 0;
	va_start(ap, format);
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
