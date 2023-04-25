#include "main.h"
/**
 * ft_pointer - putnbr
 * @n : number
 * Return: count
 */

int	ft_pointer(long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += string_conversion('-');
		n *= -1;
	}
	if (n > 9)
	{
		count += ft_pointer(n / 10);
		count += ft_pointer(n % 10);
	}
	else
		count += string_conversion(n + '0');
	return (count);
}