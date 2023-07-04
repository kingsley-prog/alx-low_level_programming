#include "main.h"
/**
 * _memset - fills memory with constant
 * @s: char pointer
 * @b: constant byte
 * @n: memory location range
 *
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
