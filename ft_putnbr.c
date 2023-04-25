#include "main.h"
/**
 * putnbr - putnbr
 * @n : number
 * Return: count
 */

int	putnbr(long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		count += putnbr(n / 10);
		count += putnbr(n % 10);
	}
	else
		count += putchar(n + '0');
	return (count);
}
