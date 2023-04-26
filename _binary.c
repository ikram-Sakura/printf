#include "main.h"

/**
* _binary - bunary
* @n : number
* Return: count
*/

int _binary(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 1)
	{
		count += _binary(n / 2);
		count += _binary(n % 2);
	}
	else
		count += _putchar(n + '0');
	return (count);
}

