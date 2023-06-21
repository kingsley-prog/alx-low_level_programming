#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: test character
 *
 * Return: 1 if character is lower and 0 for others
 */
int _islower(int c)
{
    char b = (char) c;
	char a;

	for (a = 97; a <= 122; a++)
	{
		if (c == a)
			break;
		else if (c != a)
			return (0);
	}
    return (1);
}
