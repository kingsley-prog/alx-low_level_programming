#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return success (0)
 *
 * Description: A program that prints all possible different combinations of
 * three digits.
 *
 * constraints: numbers must be seperated by comma and space.
 * three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the
 * three digits 0, 1, 2.
 * Prints only the smallest combination of three digits.
 * Numbers should be printed in ascending order with three digits
 * Use only putchar, 6 times max in your code.
 * No char data type.
 * All code should be in main function.
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '\x30'; a <= '\x37'; a++)
	{
		/* for loop for the second digit b */
		for (b = '\x31'; b <= '\x38'; b++)
			/* for loop for the third digit c */
			for (c = '\x32'; c <= '\x39'; c++)
			{
				/* test for uniqueness of the 3 digits */
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					/* avoid comma and space after the last 3 digits */
					if (a != '\x37' || b != '\x38' || c != '\x39')
					{
						putchar('\x2C');
						putchar('\x20');
					}
				}
			}
	}
	putchar('\x0A');
	return (0);
}
