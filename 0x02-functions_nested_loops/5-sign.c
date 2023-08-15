/**
 * print_sign - checks the sign of the character.
 * @n: Is the character to be checked.
 *
 * Return: 1 if n is greater than 0, 0 if n is zero, -1 otherwise.
 */

#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else if (n < -1)
	{
		_putchar('-');
		return (-1);
	}
}
