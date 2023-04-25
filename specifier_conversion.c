#include "main.h"

/**
 * specifier_conversion - hexadecimal
 * @n : number
 * @base : base in hexadecimal
 * Return: count
 */

int	specifier_conversion(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += specifier_conversion(n / 16, base);
		count += specifier_conversion(n % 16, base);
	}
	else
		count += string_conversion(base[n]);
	return (count);
}