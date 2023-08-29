/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:42:49 by leduard2          #+#    #+#             */
/*   Updated: 2023/08/29 18:19:08 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define LOWER_CASE 0
# define UPPER_CASE 1
# define POINTER_CASE 2

int	ft_princ_char(int n);
int	ft_print_str(char *str);
int	ft_print_digit(long n, int base, char flag_type);
int	ft_print_pointer(unsigned long n, int base, char flag_type);
int	ft_printf(const char *format, ...);
int	ft_print_format(char c, va_list ap);

#endif