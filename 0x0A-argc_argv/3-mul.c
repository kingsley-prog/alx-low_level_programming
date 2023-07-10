#include "main.h"
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
/**
 * main - enty point
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: return 0
 * Description: multiplies two number
 * Constraint: print result followed by newline
 * The result are stored in an integer
 * program is to take two argument if less print error followed
 * by newline and return 1
 */
int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 3)
	{
		int res;

		res = 1;
		i++;
		while (i < argc)
		{
			res *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);


}
