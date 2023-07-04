#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substrings
 *
 * Return: returns an int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;

	c = 0;

	i = 0;
	while (s[i] != 0)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
				c++;
			}
			j++;
		}
		i++;
	}
	return (c);
}
