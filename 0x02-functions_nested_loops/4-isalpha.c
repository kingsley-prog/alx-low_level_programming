#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: charater to test
 *
 * Return: return 1 for success
 */
int _isalpha(int c)
{
	if ((c >= '\x61' || c >= '\x41') && (c <= '\x7A' || c <= '\x5A'))
		return (1);
	else
		return (0);
}
