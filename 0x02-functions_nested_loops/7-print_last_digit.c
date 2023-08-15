#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @s:  The number to be checked.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int s)
{
	int last_digit = s % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
