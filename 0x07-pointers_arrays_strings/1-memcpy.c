#include "main.h"

/**
 * _memcpy - Copies n bytes from the memory
 * area src to dest
 * @dest: The source buffer to copy characters from.
 * @src: The source buffer to copy characters from.
 *
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
