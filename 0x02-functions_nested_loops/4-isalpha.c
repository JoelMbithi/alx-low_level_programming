/**
 * _isalpha - checks if it is an alpha
 * @c: The character to be checked.
 *
 * Return: 1 if it is a letter , upper and lower case, othertwise 0 .
 */
#include "main.h"

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
	{
		return (1);
	}
	else
		return (0);
}
