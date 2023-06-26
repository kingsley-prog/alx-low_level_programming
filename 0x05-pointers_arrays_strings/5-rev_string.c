#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to char(the string)
 */

void rev_string(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
		i++;
	while (i--)
    {
        char *t;
        int j;

        j = 0;
        t[j] = s[i];
        j++;
    }
}
