#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 * Description: print to limit Max(10) with TIMES(9)
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			int res;

			res = i * j;

			if (res < MAX && j != TIMES)
			{
				putchar('0' + res);
				putchar(44);
				putchar(9);
			}
			else if (res >= MAX && j != TIMES)
			{
				putchar('0' + res / 10);
				putchar('0' + res  % 10);
				putchar(44);
				putchar(9);
			}
			else if (res < MAX && j == TIMES)
			{
				putchar('0' + res);
			}
			else if (res >= MAX && j == TIMES)
			{
				putchar('0' + res / 10);
				putchar('0' + res % 10);
			}
		}
		putchar('\n');
	}
}
