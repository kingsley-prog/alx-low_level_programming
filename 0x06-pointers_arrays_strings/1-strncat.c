#include "main.h"
/**
  * _strncat - concatenate two strings
  * @dest: destination string
  * @src: source string
  * @n: number of byte
  *
  * Return: return dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != 0)
		j++;


	while (i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
