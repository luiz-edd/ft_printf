/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:22:00 by leduard2          #+#    #+#             */
/*   Updated: 2023/08/28 20:59:50 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char *p;
	p = "p";
	// ft_printf("my: %d\n",ft_printf("%c\n", 'a'));
	// printf("original: %d\n",printf("%c\n", 'a'));

	// ft_printf("my: %d\n",ft_printf("%s\n", "hello world"));
	// printf("original: %d\n",printf("%s\n", "hello world"));

	// ft_printf("my: %d\n",ft_printf("%x\n", -1));
	// printf("original: %d\n",printf("%x\n", -1));

	// ft_printf("my: %d\n",ft_printf("%X\n", -100));
	// printf("original: %d\n",printf("%X\n", -100));

	// ft_printf("my: %d\n",ft_printf("%p\n", p));
	// printf("original: %d\n",printf("%p\n", p));

	// ft_printf("my: %d\n",ft_printf("%p\n", p));
	// printf("original: %d\n",printf("%p\n", p));

	ft_printf("my: %d\n",ft_printf("%u\n", -1));
	ft_printf("original: %d\n",printf("%u\n", -1));
}