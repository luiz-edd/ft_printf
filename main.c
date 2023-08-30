/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:22:00 by leduard2          #+#    #+#             */
/*   Updated: 2023/08/29 23:09:21 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

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

// ft_printf("my: %d\n",ft_printf("%u\n", -1));
// ft_printf("original: %d\n",printf("%u\n", -1));

// ft_printf("my: %d \n",ft_printf(" %%\n"));
// printf("----------------------------\n");
// printf("original: %d \n",printf(" %%\n" ));

// ft_printf("my: %d\n",ft_printf(" NULL %p NULL ", NULL));
// printf("original: %d\n",printf(" NULL %p NULL ", NULL));

// ft_printf("my: %d\n", ft_printf(" %p\n", LONG_MAX));
// ft_printf("my: %d\n", ft_printf(" %p\n", LONG_MIN));
// ft_printf("original: %d\n", printf("%7.6d", 12345));

// ft_printf("original: %d\n", printf(" %p\n", LONG_MIN));
// ft_printf("original: %d\n", printf(" %p\n", LONG_MAX));
// ft_printf("my: %d\n", ft_printf(" %p\n", LONG_MIN));
// ft_printf("my: %d\n", ft_printf(" %p\n", LONG_MAX));

// printf("%d", printf(" NULL %s NULL ", NULL));

//# add 0x at the beggining when use x flag or 0X when using X

//+ add a plus sign at the beggining of a a positive number when using i or d flag

//' ' add a space before a POSITIVE number using i or d flag,
// this flag is ignored if the + flag is used together,
// the field should have the
// same amount of spaces icluding the number itself, example "%4d",
// 11 will output | 11 |

//- add the suposed output from the suposed flag to the right instead of the left,
// for example
// %-2d will print two spaces at the final instead off adding in the beggin

int	main(void)
{
	char	*p;

	p = "p";
	printf("|%-#15.12X| |%6.3d|", 11, -20);
}
