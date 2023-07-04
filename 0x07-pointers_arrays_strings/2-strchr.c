#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: return the locate string
 */
char *_strchr(char *s, char c)
{
	char t;
	int i, int j;

	while (*s++)
		j++;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			break;
		else
			continue;
	}
	for (; i < j; i++)
	{
		t = s[i];
		s[i] = t;
	}
	return (s);
}
