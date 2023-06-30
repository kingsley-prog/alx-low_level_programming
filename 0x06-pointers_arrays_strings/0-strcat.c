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
	int i;
	int j;

	i = 0;
	while (*dest++)
		i++;

	j = 0;
	while (src[j] != 0)
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
