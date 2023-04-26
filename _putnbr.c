#include "main.h"
/**
 * _putnbr - _putnbr
 * @n : number
 * Return: count
 */

int	_putnbr(long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		count += _putnbr(n / 10);
		count += _putnbr(n % 10);
	}
	else
		count += _putchar(n + '0');
	return (count);
}
