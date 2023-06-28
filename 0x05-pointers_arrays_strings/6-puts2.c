#include "main.h"
/**
 * puts2 - print even values in strings
 * @str: value to print
 */
void puts2(char *str)
{
	int i = 0;
	int size = 0;

	while (*str++)
		size++;

	while (i < size)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
