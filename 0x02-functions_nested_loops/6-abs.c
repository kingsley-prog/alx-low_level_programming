#include "main.h"
/**
 * _abs - computes the absolute value of integer
 * @i: integer
 *
 * Return: return the absolutr value of the integer
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else
		return (i);
}
