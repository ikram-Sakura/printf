#include "main.h"

/**
 * _adresse - _adresse in memory
 * @n : number
 * @base : base in _hexadecimal
 * Return: count
 */

int	_adresse(unsigned long int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += _adresse(n / 16, base);
		count += _adresse(n % 16, base);
	}
	else
		count += _putchar(base[n]);
	return (count);
}
