#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to char(the string)
 */

void rev_string(char *s)
{
	int i;
	int j;
	char c;

	i = 0;
	while (*(s + i) != 0)
		i++;

	j = 0;

	while (i--)
	{
		c = s[i];
		s[i] = s[t];
		s[t] = c;
		j++;
	}

}
