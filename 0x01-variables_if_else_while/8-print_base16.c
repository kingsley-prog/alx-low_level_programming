#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 (success)
 * Putchar: print char to stdout
 *
 * Description: A program to print all numbers in base 16 lowercase letters,
 * followed by newline.
 *
 * Constraints: You can only use the putchar function.
 * All your code should be in the main function.
 * you can only use putchar three times in your code.
 */
int main(void)
{
	char c;

	for (c = '\x30'; c <= '\x39'; c++)
		putchar(c);
	for (c = '\x61'; c <= '\x66'; c++)
		putchar(c);
	putchar('\x0A');
	return (0);
}
