#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: integer
 *
 * Return: returns last value of the last digit
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		i = (-i);
	_putchar('0' + i);
	return (i);
}
