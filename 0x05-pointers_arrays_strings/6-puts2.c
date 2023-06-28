#include "main.h"
/**
 * puts2 - print even values in strings
 * @str: value to print
 */
void puts2(char *str)
{
    int i;

    i = 0;

    while (str[i] != 0)
    {
        _putchar(str[i]);
        i+=2;
    }
    _putchar('\n');
}
