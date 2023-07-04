#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: area in memory(a pointer to a char data type)
 * @b: constant byte(char data	type)
 * @n: range in memory to fill in constant byte
 *
 * Return: return the string filled with contant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (s)
	{
		int i = 0

		while (i < n)
			s[i] = b;
	}
	return (s);
}
