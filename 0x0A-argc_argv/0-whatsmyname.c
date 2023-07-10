#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return success
 *
 * Description: prints its name followed by newline.
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		int j = 0;

		while (argv[i][j] != 0)
		{
			putchar(argv[i][j]);

			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
