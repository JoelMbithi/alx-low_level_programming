#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring @s.
 *
 * @s: The string to bbe searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int bytes = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
			{
				return (bytes);

			}

		}

		s++;
	}

	return (bytes);
}
