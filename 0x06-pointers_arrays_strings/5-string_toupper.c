#include "main.h"
/**
  * string_toupper - to upper case letters
  * @s: a pointer to a char type
  *
  * Return: return a upper case letters
  */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{

			s[i] = s[i] - 32;
			i++;
		}
	}
	return (s);
}
