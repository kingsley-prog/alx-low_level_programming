#include <stdio.h>
int main(void)
{
    int i;

    for (i = '\x61'; i <= '\x7A'; i++)
        putchar(i);
    putchar('\x0A');
    return 0;
}

