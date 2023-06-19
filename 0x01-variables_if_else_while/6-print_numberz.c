#include <stdio.h>
/**
 * main - Acess point
 *
 * Return: return 0 (success)
 * Putchar: function to print a character to stdout.
 *
 * Description: A program that print digit for 0 to 9 followed by newline.
 *
 * Constraints: You are not allow to use any char variable data type.
 * You can only use putchar for stdout.
 * You can only use putchar twice in your code.
 * All your code should be in the main function.
 */
int main(void)
{
	int i;

	for (i = '\x30'; i <= '\x39'; i++)
		putchar(i);
	putchar('\x0A');
	return (0);
}
