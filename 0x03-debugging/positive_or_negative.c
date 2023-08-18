#include "main.h"

/**
 * positive_or_negative - Checks if a number is positive
 * or negative
 *
 * @i: Is the number to be checked
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	if (i == 0)
		printf("%d is zero\n", i);
	if (i < 0)
		printf("%d is negative\n", i);

}
