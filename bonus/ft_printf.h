/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:49:18 by leduard2          #+#    #+#             */
/*   Updated: 2023/09/04 20:33:10 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

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
}			t_format;

//utils
t_format	*inicialize_flags(t_format *flags);

//ft_eval_format
int			is_normal_flag(char c);
int			ft_eval_format(t_format *flags, char *format, int i);
int			ft_print_format(char c, t_format *flags);

//normal flags
int			ft_print_char(t_format *flag);


#endif