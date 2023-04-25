#include "main.h"

/**
 * hexadecimal - hexadecimal
 * @n : number
 * @base : base in hexadecimal
 * Return: count
 */

int	hexadecimal(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += hexadecimal(n / 16, base);
		count += hexadecimal(n % 16, base);
	}
	else
		count += putchar(base[n]);
	return (count);
}
