#include "main.h"

/**
 * print_sign - entry point
 * @n: character
 * Description: return 1 if n is in lower case
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
			return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
			}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
