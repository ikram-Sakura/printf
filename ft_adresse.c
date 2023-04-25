#include "main.h"

/**
 * ft_adresse - adresse in memory
 * @n : number
 * @base : base in hexadecimal
 * Return: count
 */

int	ft_adresse(unsigned long int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_adresse(n / 16, base);
		count += ft_adresse(n % 16, base);
	}
	else
		count += string_conversion(base[n]);
	return (count);
}