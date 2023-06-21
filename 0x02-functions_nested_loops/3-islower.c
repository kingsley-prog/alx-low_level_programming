#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: test character
 *
 * Return: 1 if character is lower and 0 for others
 */
int _islower(int c)
{
	char a;

	for (a = '\x61'; a <= '\x7A'; a++)
	{
		if (c == a)
			return (1);
		else
			return (0);
	}
}
