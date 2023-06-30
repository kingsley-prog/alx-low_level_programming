#include "main.h"
/**
 * _strcat - concatenate two strings
 * @src: the strings to apend
 * @dest: the strings we are appending to
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*dest++)
		i++;
	while (*src++)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + j) = '\0';

	return (0);
}
