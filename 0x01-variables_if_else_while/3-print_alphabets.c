#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always sucess
 *
 * Description: A program that prints the alphabet in lowercase
 * and then in uppercase followed by a newline.
 *
 * Constraint: You can only use the putchar function
 * All your code should be in the main function.
 * You can only use putchar three times in your code.
 */
int main(void)
{
	char c;

	for (c = '\x61'; c <= '\x7A'; c++)
		putchar(c);
	for (c = '\x41'; c <= '\x5A'; c++)
		putchar(c);
	putchar('\x0A');
	return (0);
}
