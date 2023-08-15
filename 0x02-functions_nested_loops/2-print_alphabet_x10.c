/**
 * print_alphabet_x10 - prints the alphabet ten times in lower case.
 */
#include "main.h"

void print_alphabet_x10(void)
{
	char letter;
	int n = 0;

	while (n++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}

