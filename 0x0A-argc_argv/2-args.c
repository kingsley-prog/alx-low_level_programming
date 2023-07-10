#include "main.h"

/**
 * main - entry point
 * @argc: arguments count
 * @argv: argumnets vector
 *
 * Return: return 0
 * Description: prints all arguments it receives.
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;

	while (i < argc)
	{
		int j = 0;

		while (argv[i][j] != 0)
		{
			_putchar(argv[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
