#include "main.h"

/**
* binary_conversion 
* @n : number
* Return: count
*/

int binary_conversion(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 1)
	{
		count += binary_conversion(n / 2);
		count += binary_conversion(n % 2);
	}
	else
		count += string_conversion(n + '0');
	return (count);
}