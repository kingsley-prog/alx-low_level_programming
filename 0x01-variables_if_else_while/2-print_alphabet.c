#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always sucess
 *
 * Description: A program that prints alphabet in lowercase followed by
 * newline using Hexedecimal representation of character.
 */
int main(void)
{
	char c;

	for (c = '\x61'; c <= '\x7A'; c++)
		putchar(c);
	putchar('\x0A');
	return (0);
}
