/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:02:53 by leduard2          #+#    #+#             */
/*   Updated: 2023/08/29 18:07:04 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(long n, int base, char flag_type)
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
}
