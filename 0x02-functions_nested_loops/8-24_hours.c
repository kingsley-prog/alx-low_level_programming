#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i;
	int j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			/* get the first number with / and the second with % */
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');

			/* get the other part first and second with / and % */
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
	}
}
