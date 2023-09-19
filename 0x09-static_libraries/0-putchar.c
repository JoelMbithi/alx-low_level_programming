#include <unistd.h>

/*
 * _puutchar -writes the character c to stdtou
 * @c:The charcter to print
 * Return: on success
 * On error -1 is returned and errno is set to appropiatly
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}
