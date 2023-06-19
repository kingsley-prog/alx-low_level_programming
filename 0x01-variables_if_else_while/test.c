#include <stdio.h>
int main(void)
{
    int i;

    for (i = '\x30'; i <= '\x39'; i++)
        putchar(i);
    putchar('\x0A');
    return 0;
}

