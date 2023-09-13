/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:00:48 by leduard2          #+#    #+#             */
/*   Updated: 2023/09/13 19:52:08 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (str == NULL)
		return (ft_print_str("(null)"));
	while (str[i])
		count += ft_princ_char((int)str[i++]);
	return (count);
}
