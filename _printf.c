#include "main.h"

/**
* adresse - adr
* @argp : list arg
* Return: count
*/

int	adresse(va_list argp)
{
	int count;
	unsigned long int adr;

	count = 0;
	adr = va_arg(argp, unsigned long int);
	if (adr)
	{
		count += flag_conversion("0x", 0) + ft_adresse(adr, "0123456789abcdef");
	}
	else
		count += flag_conversion("(nil)", 0);
	return (count);
}

/**
 * ft_format - function format
 * @argp : list arguments
 * @format : format
 * Return: count
 */

static int	ft_format(va_list argp, char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += string_conversion(va_arg(argp, int));
	else if (format == 's')
		count += flag_conversion(va_arg(argp, char *), 0);
	else if (format == 'd' || format == 'i')
		count += ft_pointer(va_arg(argp, int));
	else if (format == 'o')
		count += buffered_printf(va_arg(argp, unsigned int));
	else if (format == 'b')
		count += binary_conversion(va_arg(argp, unsigned int));
	else if (format == 'u')
		count += length_modifiers(va_arg(argp, int));
	else if (format == 'x')
		count += specifier_conversion(va_arg(argp, int), "0123456789abcdef");
	else if (format == 'X')
		count += specifier_conversion(va_arg(argp, int), "0123456789ABCDEF");
	else if (format == 'S')
		count += string_conversion(va_arg(argp, char *), 1);
	else if (format == 'p')
		count += adresse(argp);
	else if (format == '%')
		count += string_conversion('%');
	else if (format == 'r')
		count += rev_str(va_arg(argp, char *));
	else if (format == 'R')
		count += rot13(va_arg(argp, char *));
	else
	{
		count += string_conversion('%');
		count += string_conversion(format);
	}
	return (count);
}

/**
 * _printf - printf
 * @format : last argument in varidic function
 * Return: count
 */

int	_printf(const char *format, ...)
{
	va_list	argp;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(argp, format);
	if (!format)
		return (-1);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_format(argp, format[i]);
		}
		else
			count += string_conversion(format[i]);
		i++;
	}
	va_end(argp);
	return (count);
}