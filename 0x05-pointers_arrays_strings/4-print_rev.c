#include "main.h"

/**
 * print_rev - reverse string
 * @s: a pointer to a char
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;

	while (*(s + i) != 0)
		i++;
	/* get the length without the nul */
	j = i - 1;

	while(j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
