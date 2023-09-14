/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:49:18 by leduard2          #+#    #+#             */
/*   Updated: 2023/09/13 22:04:55 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_format
{
	va_list	ap;
	int		wdt;
	int		prc;
	int		zero;
	int		pnt;
	int		dash;
	int		tl;
	int		sign;
	int		is_zero;
	int		perc;
	int		sp;
	int		hash;
	int		lowc;
	int		upc;
}			t_format;

// utils
t_format	*inicialize_flags(t_format *flags);
int			ft_printf(const char *format, ...);

// ft_eval_format
int			is_normal_flag(char c);
int			ft_eval_format(t_format *flags, const char *format, int i);
int			ft_print_format(char c, t_format *flags);

// normal flags
int			ft_print_char(t_format *flag);
int			ft_print_str(t_format *flags);
int			ft_print_digit(t_format *flags);
int			ft_print_ex(t_format *flags);
int			ft_print_ex_up(t_format *flags);
int			ft_print_pointer(t_format *flags);
int			ft_print_unsigned(t_format *flags);

#endif