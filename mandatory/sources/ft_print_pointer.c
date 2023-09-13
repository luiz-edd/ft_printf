/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:03:20 by leduard2          #+#    #+#             */
/*   Updated: 2023/08/29 18:07:11 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long n, int base, char flag_type)
{
	int		count;
	char	*symbols;
	char	*symbols_up;

	count = 0;
	symbols = "0123456789abcdef";
	symbols_up = "0123456789ABCDEF";
	if (flag_type == POINTER_CASE)
	{
		if (n == 0)
			return (ft_print_str("(nil)"));
		return (ft_print_str("0x") + ft_print_pointer(n, base, LOWER_CASE));
	}
	else if (n < (unsigned long)base)
	{
		if (flag_type == UPPER_CASE)
			return (ft_princ_char(symbols_up[n]));
		return (ft_princ_char(symbols[n]));
	}
	else
	{
		count = ft_print_pointer(n / base, base, flag_type);
		return (count + ft_print_pointer(n % base, base, flag_type));
	}
}
