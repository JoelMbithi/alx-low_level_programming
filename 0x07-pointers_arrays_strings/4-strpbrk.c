#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes.
 *
 * @s: The string to be searched.
 * @accept: The set of bytes being searched for.
 *
 * Return: A pointer to the byte in s that matches one of the
 * bytes in accept or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
