#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry points
 *
 * Return: always sucess (0)
 * Srand: to generate random time
 * rand: to generate random values
 * Description: to generate a number wether positive or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
