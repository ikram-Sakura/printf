#include "main.h"

/**
* buffered_printf 
* @n : number
* Return: count
*/

int buffered_printf(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 7)
	{
		count += buffered_printf(n / 8);
		count += buffered_printf(n % 8);
	}
	else
		count += string_conversion(n + '0');
	return (count);
}