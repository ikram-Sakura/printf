#include "main.h"

/**
* octal - octal
* @n : number
* Return: count
*/

int octal(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 7)
	{
		count += octal(n / 8);
		count += octal(n % 8);
	}
	else
		count += putchar(n + '0');
	return (count);
}

