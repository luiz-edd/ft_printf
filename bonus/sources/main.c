/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:25:00 by leduard2          #+#    #+#             */
/*   Updated: 2023/09/13 20:13:39 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include "stdio.h"
#include <limits.h>

int	main(void)
{
	char *p;

	p = "10";
	// ft_printf("| my: %d\n", ft_printf("%c", 'a'));
	// printf("| org: %d\n", printf("%c", 'a'));
	// // printf("original: %d\n", printf("%c\n", 'a'));

	// ft_printf("my: %d\n", ft_printf("%s\n", "hello world"));
	// printf("original: %d\n", printf("%s\n", "hello world"));

	ft_printf("my: %d\n", ft_printf("% +d\n", -1000));
	printf("original: %d\n", printf("% +d\n", -1000));

	// ft_printf("my: %d\n", ft_printf("%X\n", -100));
	// printf("original: %d\n", printf("%X\n", -100));

	// ft_printf("my: %d\n", ft_printf("%p\n", p));
	// printf("original: %d\n", printf("%p\n", p));

	// ft_printf("my: %d\n", ft_printf("%p\n", p));
	// printf("original: %d\n", printf("%p\n", p));

	// ft_printf("my: %d\n", ft_printf("%u\n", -1));
	// ft_printf("original: %d\n", printf("%u\n", -1));

	// ft_printf("my: %d \n", ft_printf(" %%\n"));
	// printf("----------------------------\n");
	// printf("original: %d \n", printf(" %%\n"));

	// ft_printf("my: %d\n", ft_printf(" NULL %p NULL ", NULL));
	// printf("original: %d\n", printf(" NULL %p NULL ", NULL));

	// ft_printf("my: %d\n", ft_printf(" %p\n", LONG_MAX));
	// ft_printf("my: %d\n", ft_printf(" %p\n", LONG_MIN));
	// ft_printf("original: %d\n", printf("%7.6d", 12345));
	// printf("----------------------------\n");
	// printf("original: %d\n", printf(" %p\n", LONG_MIN));
	// ft_printf("my: %d\n", ft_printf(" %p\n", LONG_MIN));
	// ft_printf("original: %d\n", printf(" %p\n", LONG_MAX));
	// ft_printf("my: %d\n", ft_printf(" %p\n", LONG_MAX));
	// printf("----------------------------\n");
	// 	printf("%d", printf(" NULL %s NULL ", NULL));
	// 	printf("----------------------------\n");
}