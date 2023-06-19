#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 (success)
 * Putchar: print character to stdout
 *
 * Description: A program to print lowercase letters in reverse with newline.
 *
 * Constraints: You can only use the putchar function.
 * All your code should be in the main function.
 * You can only use putchar twice in your code.
 */
int main(void)
{
	char c;

	for (c = '\x7A'; c >= '\x61'; c--)
		putchar(c);
	putchar('\x0A');
	return (0);
}
