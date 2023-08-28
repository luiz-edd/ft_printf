#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define LOWER_CASE 0
# define UPPER_CASE 1
# define POINTER_CASE 2

int	ft_printf(const char *format, ...);

#endif