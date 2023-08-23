#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared to.
 *
 * Return: If str1 < str2, The negative difference of the
 * first unmatched characters.
 * if str1 == str2, 0
 * If str1 > str2, the positive difference of the first
 * unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
