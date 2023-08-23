#include "main.h"

/**
 * string_toupper - Changes all the lowercase letters of
 * a string to ppercase.
 * @str: The sring to be changed
 *
 * Return: A pointer to the changed strng.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
