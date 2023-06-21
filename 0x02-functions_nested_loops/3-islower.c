#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: test character
 *
 * Return: 1 if character is lower and 0 for others
 */
int _islower(int c)
{
	if ( c >= '\x61' && c <= '\x7A')
		return (1);
	else
		return (0);
}
