#include "main.h"

/**
 * print_chessboard - checkboard grid
 * @a: the grid
 */

void print_chessboard(char (*a)[8])
{
	int j, int i;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j])
				j++;
		}
		i++;
	}
	_putchar('\n');
}
