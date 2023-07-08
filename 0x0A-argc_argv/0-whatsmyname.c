#include "main.h"
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
			_putchar(argv[i][j]);

			j++;
		}
		i++;
	}
	_putchar('\n');

	return (0);
}
