#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return success (0)
 *
 * Description: A program that prints all possible different combinations of,
 * two digits
 *
 * Constraints: Number must be seperated by comma and followed by space.
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digit 0 and 1.
 * Print only the smallest combination of two digits
 * Number should be printed in ascending order, with two digits
 * You can only use putchar function
 * You can only use putchar 5 times max in your code
 * You are not allow to use char variable data	type
 * All your code should be in the main function
 */
int main(void)
{
	int a;
	int b;

	/* for loop for the first digit */
	for (a = '\x30'; a <= '\x38'; a++)
	{
		/* for loop for the second digit */
		for (b = '\x31'; b <= '\x39'; b++)
		{
			/* to print unique value of a and b */
			if (b > a)
			{
				putchar(a);
				putchar(b);

				/* to avoid the last two digit having comma and space */
				if (a != '\x38' || b != '\x39')
				{
					/* to print comma and space after digit */
					putchar('\x2C');
					putchar('\x20');
				}
			}
		}
	}
	/* newline character */
	putchar('\x0A');
	return (0);
}
