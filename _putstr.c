#include "main.h"

/**
 * _putstr - _putstring
 * @str : string
 * @cheack : cheack 0 or 1
 * Return: count
 */

int	_putstr(char *str, int cheack)
{
	int i = 0;
	int count = 0;

	if (!str)
		str = "(null)";
	while (str[i])
	{
		if (((str[i] > 0 && str[i] < 32) || str[i] >= 127) && cheack)
		{
			count += _putchar('\\');
			count += _putchar('x');
			if (str[i] < 16)
				count += _putchar('0');
			count += _hexadecimal((unsigned int)str[i], "0123456789ABCDEF");
		}
		else
			count += _putchar(str[i]);
		i++;
	}
	return (count);
}

/**
 * _rev_str - prints the reverse string
 * @str: the string
 * Return: count
 */

int _rev_str(char *str)
{
	int i = 0;
	int count = 0;

	if (!str)
		return (_putstr("(null)", 0));
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		count += _putchar(str[i]);
		i--;
	}
	return (count);
}

/**
 * _rot13 - prints the _rot13 in string
 * @str: the string
 * Return: count
 */

int _rot13(char *str)
{
	int i = 0;
	int count = 0;

	if (!str)
		return (_putstr("(null)", 0));
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			count += _putchar((((str[i] - 'a') + 13) % 26) + 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			count += _putchar((((str[i] - 'A') + 13) % 26) + 'A');
		else
			count += _putchar(str[i]);
		i++;
	}
	return (count);
}
