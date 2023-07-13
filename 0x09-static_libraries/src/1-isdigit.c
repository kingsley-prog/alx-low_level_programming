#include "main.h"
/**
 * _isdigit - checks for digit ( 0 to 9)
 * @c: test digit
 *
 * Return: 1 if c is a digit and 0, otherwise
 */
int _isdigit(int c)
{
	if (c >= '\x30' && c <= '\x39')
		return (1);
	else
		return (0);
}
