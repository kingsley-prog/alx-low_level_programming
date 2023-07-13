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
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
