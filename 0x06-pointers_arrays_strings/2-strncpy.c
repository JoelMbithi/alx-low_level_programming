#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Is the destination to be copied to.
 * @src: Is the source of the string to be copied from.
 * @n: Is the number of bytess from src to be copied to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
