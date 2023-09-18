#include "main.h"

/**
 * _strstr - Finds the first occurence of the substring
 * @needle in the string @haystack.
 *
 * @needle: The substring being looked for.
 * @haystack: The strig being searched.
 *
 * Return: A pointer to begining of locad
 * ted substring or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
