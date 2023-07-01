#include "main.h"
/**
  * string_toupper - to upper case letters
  * @s: a pointer to a char type
  *
  * Return: return a upper case letters
  */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != 0; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) = *(s + i) - 32;
	}
	return (s);
}
