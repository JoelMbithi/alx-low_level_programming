#include "main.h"

/**
 * print_triangle - Print a triangle,followed by a newline
 * using the character #
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int h, i;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (i = size - h; i > 0; i++)
			{
				_putchar(' ');
			}

			for (i = 0; i < h; index++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');

}
