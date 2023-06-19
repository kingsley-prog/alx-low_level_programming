#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 (success)
 * Putchar: print char to stdout
 *
 * Description: A program to print all possible combinations of single digit.
 *
 * Constraints: Numbers must be seperated by comma(,) followed by a space.
 * Numbers should be printed in ascending order
 * You can only use putchar function.
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allow to use any variable of type char.
 */
int main(void)
{
	int i;

	for (i = '\x30'; i <= '\x39'; i++)
	{
		putchar(i);
		if (i != '\x39')
		{

			putchar('\x2C');
			putchar('\x20');

		}
	}
	putchar('\x0A');
	return (0);

}
