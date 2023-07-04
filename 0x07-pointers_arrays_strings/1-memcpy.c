#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: char pointer
 * @scr: string to copy
 * @n: bytes to copy
 *
 * Return: dest a char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = src[i];
    return (dest);
}
