#include "main.h"

/**
 * putchar - putchar
 * @c : charater
 *Return: 1
 */

int	putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
