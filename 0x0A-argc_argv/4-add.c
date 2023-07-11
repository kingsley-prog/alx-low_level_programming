#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry points
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: return 0
 * Description: add positive numbers
 * constraint: print the result followed by a newline
 * if no number is passed to the program print 0 then newline
 * if one number contains symbols that are not digits, print Error
 * followed by newline and return 1
 * store result in int
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		sum = 0;
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			int j = 0;

			while (argv[i][j] != '\0')
			{

				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum = sum + atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);

	return (0);
}
