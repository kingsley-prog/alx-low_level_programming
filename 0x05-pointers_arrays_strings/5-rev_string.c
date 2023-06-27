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
	char t[i];

	while (i--)
	{
		t[j] = s[i];
		j++;
	}
	*s = *t;
	*s = '\0';
}
