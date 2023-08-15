#include "stdio.h"

/**
 * print_to_98 - Prints all the natural numbers from input to 98.
 *
 * @n: The starting point of the count.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}