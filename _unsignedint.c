#include "main.h"

/**
 * _unsignedint - unsigned int
 * @n : number
 * Return: count
 */

int	_unsignedint(unsigned int n)
{
	int	count;

	count = 0;
	count += _putnbr(n);
	return (count);
}
