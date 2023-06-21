#include "main.h"
/**
 * main - entry point
 *
 * Return: return sucess(0)
 *
 * Description: prints the _putchar to stdout followed by newline.
 */
int main(void)
{
	char str[9] = "_putchar";
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
