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
	int str_cnt;

	str_cnt = 0;

	while (*str++)
		str_cnt++;

	if (str_cnt % 2 == 0)
	{
		n = str_cnt / 2;

		while (str[n] != 0)
		{

			_putchar(str[n]);
			n++;
		}
	}
	else if (str_cnt % 2 != 0)
	{
		n = (str_cnt - 1) / 2;

		while (str[n] != 0)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
