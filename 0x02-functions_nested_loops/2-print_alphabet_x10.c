#include "main.h"
/**
 * print_alphabet_x10 - print 10 times lowercase letter with newline
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = '\x61'; c <= '\x7A'; c++)
			_putchar(c);
		_putchar('\x0A');

	}
}
