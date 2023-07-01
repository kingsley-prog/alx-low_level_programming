#include "main.h"
/**
  * _strcmp - compare two strings
  * @s1: first char pointer
  * @s2: second char pointer
  *
  * Return: return the diff of the two strings
  */
int _strcmp(char *s1, char *s2)
{
	while (s1 || s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
