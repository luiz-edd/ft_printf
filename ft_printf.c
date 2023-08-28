/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:21:55 by leduard2          #+#    #+#             */
/*   Updated: 2023/08/28 15:48:48 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_princ_char(int n)
{
	write(1, &n, 1);
	return (1);
}

int	ft_print_decimal(float n, int base)
{
	int count;
	char *symbols;
	count = 0;

	symbols = "0123456789abcdef";
	if (n < 0)
		return (ft_print_decimal(-n, base) + 1);
	if (n < base)
		return (ft_princ_char(symbols[(int)n]));
	else
	{
		count = ft_print_decimal(n / 10, base);
		return (count + ft_princ_char(((int)n % 10)));
	}
}