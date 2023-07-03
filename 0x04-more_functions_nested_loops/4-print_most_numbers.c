#include "main.h"
/**
 * print_most_numbers - print numbers form 0 to 9
 *
 * Constraint: do not print 2 and 4
 */
void print_most_numbers(void)
{
	char c;

	for(c = '\x30'; c <= '\x39'; c++)
	{
		if (c == '\x32' || c == '\x35')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
