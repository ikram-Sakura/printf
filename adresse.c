#include "main.h"

/**
 * adresse - adresse in memory
 * @n : number
 * @base : base in hexadecimal
 * Return: count
 */

int	adresse(unsigned long int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += adresse(n / 16, base);
		count += adresse(n % 16, base);
	}
	else
		count += putchar(base[n]);
	return (count);
}
