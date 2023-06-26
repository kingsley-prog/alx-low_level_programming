#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to char(the string)
 */

void rev_string(char *s)
{
	int i;
	int j;

	i = 0;
	while (*(s + i) != 0)
		i++;

	j = 0;
	while (i--)
	{
		s[j] = s[i];
		j++;
	}
}
