#include <stdio.h>
int main(void)
{
	char letters;
	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
