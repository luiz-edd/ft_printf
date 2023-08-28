/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:21:55 by leduard2          #+#    #+#             */
/*   Updated: 2023/08/28 19:20:23 by leduard2         ###   ########.fr       */
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
		count += ft_princ_char((int)str[i]);
	return (count);
}

int	ft_print_digit(float n, int base, char case)
{
	int		count;
	char	*symbols;
	char	*symbols_up;

	count = 0;
	symbols = "0123456789abcdef";
	symbols_up = "0123456789ABCDEF";
	if (n < 0)
	{
		ft_princ_char('-');
		return (ft_print_digit(-n, base, case) + 1);
	}
	else if (n < base)
	{
		if (case == LOWER_CASE)
			return (ft_princ_char(symbols[n]));
		else if (case == UPPER_CASE)
			return (ft_princ_char(symbols_up[n] += 32));
	}
	else
	{
		count = ft_print_digit(n / base, base, case);
		return (count + ft_print_digit(n % base, base, case));
	}
}

int	ft_print_format(char c, va_list ap)
{
	if (c == 'c')
		ft_princ_char(va_arg(ap, int));
	else if (c == 's')
		ft_print_str(va_arg(ap, char *));
	else if (c == 'i' || c == 'd')
		ft_print_digit((float)va_arg(ap, int), 10, LOWER_CASE);
	else if (c == 'x' || c == 'p')
		ft_print_digit((float)va_arg(ap, unsigned int), 16, LOWER_CASE);
	else if (c == 'X')
		ft_print_digit((float)va_arg(ap, unsigned int), 16, UPPER_CASE);
}

int	printf(const char *format, ...)
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
}
