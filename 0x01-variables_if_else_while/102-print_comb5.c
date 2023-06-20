#include <stdio.h>
/**
* main - entry point
*
* Return: always sucess
*
* Description: A program that prints all possible combinations of two two-
* digit numbers.
* The number shoud range from 0 to 99.
* The two numbers should be seperated by a space.
* All numbers should be printed with two digits. 1 should be 01.
* The combination of numbers must be seperated by comma, followed by a space.
* The combinations of numbers should beee printed in ascending order
* 00 01 and 01 00 are considered as the same combination of number 0 and 1.
* You can only use putchar function max of eight times.
* No use of char data type.
* All code should be in the main function.
*/
int main(void)
{
int a;
int b;
int c;
int d;

for (a = '\x30'; a <= '\x39'; a++)
{
for (b = '\x30'; b <= '\x38'; b++)
{
for (c = '\x30'; c <= '\x39'; c++)
{
for (d = '\x31'; d <= '\x39'; d++)
{
if (d >= c && c >= a && a >= b)
{
putchar(a);
putchar(b);
putchar('\x20');
putchar(c);
putchar(d);
if (a != 57 || b != 56 || c != 57 || d != 57)
{
putchar('\x2C');
putchar('\x20');
}
}
}
}
}
}
putchar('\x0A');
return (0);
}
