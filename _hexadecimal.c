#include "main.h"

/**
 * _hexadecimal - _hexadecimal
 * @n : number
 * @base : base in _hexadecimal
 * Return: count
 */

int	_hexadecimal(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += _hexadecimal(n / 16, base);
		count += _hexadecimal(n % 16, base);
	}
	else
		count += _putchar(base[n]);
	return (count);
}
