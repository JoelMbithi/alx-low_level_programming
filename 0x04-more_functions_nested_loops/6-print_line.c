#include "main.h"

/**
 * print_line - Draws a straight line in the trminal
 * @n: Number of times the character _
 * shiuld be printed.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
