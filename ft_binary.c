#include "main.h"

/**
* binary - bunary
* @n : number
* Return: count
*/

int binary(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 1)
	{
		count += binary(n / 2);
		count += binary(n % 2);
	}
	else
		count += putchar(n + '0');
	return (count);
}

