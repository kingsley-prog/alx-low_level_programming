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
	i--;

	for(j = 0; j < i; j++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i--;
	}


}
