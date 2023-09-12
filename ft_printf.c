#include "ft_printf.h"

int	ft_print_c(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_s(char *str)
{
	int	count;

	count = 0;
	while (str)
	{
		count += ft_print_c((int)(*str));
		str++;
	}
	return (count);
}

int	ft_print_format(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_print_c(va_arg(ap, int));
	else if (c == 's')
		count += ft_print_s(va_arg(ap, char *));
}

int	printf(const char *format, ...)
{
	int count;
	va_list ap;
	int i;

	va_start(ap, format);

	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_print_format(format[++i], ap);
			i++;
		}
		// ft_print_c((int)format[i]);
		i++;
		count++;
	}
}