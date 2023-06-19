#include <stdio.h>
/**
 * main - entry point.
 *
 * Return: return 0 (sucess).
 * Putchar: print a char to stdout.
 *
 * Description: A program that prints the alphabet in lowercase followed by,
 * newline.
 *
 * Contraints: Print all the letters except q and e.
 * You can only use putchar function.
 * All your code should be in the main function.
 * You can only use putchar twice in your code.
 */
int main(void)
{
	char c;

	for (c = '\x61'; c <= '\x7A'; c++)
		if (c != '\x65' && c != '\x71')
			putchar(c);
	putchar('\x0A');
	return (0);
}
