#include "main.h"

/**
* _octal - _octal
* @n : number
* Return: count
*/

int _octal(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 7)
	{
		count += _octal(n / 8);
		count += _octal(n % 8);
	}
	else
		count += _putchar(n + '0');
	return (count);
}

