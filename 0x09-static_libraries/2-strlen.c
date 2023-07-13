#include "main.h"
/**
 * _strlen - return the length of string
 * @s: a pointer to char type
 *
 * Return: count of char;
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
		i++;
	return (i);
}
