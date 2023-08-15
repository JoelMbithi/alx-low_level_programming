/**
 * _islower - Checks if a function is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
#include "main.h"

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
