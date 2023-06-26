#include "main.h"

/**
 * print_rev - reverse string
 * @s: a pointer to a char
 */

void print_rev(char *s)
{
    int i = _strlen(s);

    for (i = _strlen(s); *(s + i) != 0; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}
