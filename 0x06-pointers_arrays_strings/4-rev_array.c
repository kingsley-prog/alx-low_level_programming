#include "main.h"
/**
  * reverse_array - reverse the content of an array
  * @a: pointer to an int
  * @n: an interger
  */
void reverse_array(int *a, int n)
{
	int i = 0;

	n--;
	while (n > i)
	{
		*(a + i) = *(a + i) ^ *(a + n);
		*(a + n) = *(a + i) ^ *(a + n);
		*(a + i) = *(a + i) ^ *(a + n);
		i++;
		n--;
	}
}
