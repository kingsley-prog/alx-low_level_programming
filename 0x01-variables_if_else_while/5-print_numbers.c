#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 (success)
 *
 * Description: A program to print all single digit number of base 10 from 0,
 * followed by a newline using hexedecimal representation.
 *
 * Contraint: All code should be in the main function.
 */
int main(void)
{
	char c;

	for (c = '\x30'; c <= '\x39'; c++)
		putchar(c);
	putchar('\x0A');
	return (0);
}
