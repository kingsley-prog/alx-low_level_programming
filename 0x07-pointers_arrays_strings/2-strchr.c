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
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			/* pointer arithemetic */
			s = s + i;
			return (s);
			i++;
		}
	}
	return (NULL);
}
