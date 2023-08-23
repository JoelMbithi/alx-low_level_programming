#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int index = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[index] == leet[indx2] ||
					str[index] - 32 == leet[indx2])
				str[index] = indx2 + '0';
		}

		index++;
	}

	return (str);
}
