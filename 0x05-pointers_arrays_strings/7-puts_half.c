#include "main.h"
/**
 * puts_half - prints half of a string followed by newline
 * @str: a pointer to a type char
 *
 * constraints: The function should print  the second half of the string
 * if the number of characters is odd, the function should print the last
 * n characters of the string, where n = (length -) / 2
 */
void puts_half(char *str)
{
	int cnt;
	int n;
	int i;

	while (*str++)
		cnt++;
	if (cnt % 2 == 0)
	{
		for (i = cnt / 2; *(str + i) != '\0'; i++)
			_putchar(*(str + i));
	}
	else if (cnt % 2)
	{
		for (n = (cnt - 1) / 2; n < cnt - 1; n++)
		{
			_putchar(*(str + n + 1));
		}
	}
	_putchar('\n');

}
