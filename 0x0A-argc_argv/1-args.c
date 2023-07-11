#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argumnent vector
 *
 * Return: success
 * Description: prints the number of arguments passed to it
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int i;

	i = 0;

	while (i < argc)
	{
		i++;
	}
	i--;

	if (i >= 10)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
	}
	else
	{
		putchar(i + '0');
		putchar('\n');

	}
	return (0);
}
