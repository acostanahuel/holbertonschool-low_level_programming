#include "main.h"

/**
 * reverse_array - print an array in reverse mode
 * @a: array
 * @n: the lenght of the array
 */
void reverse_array(int *a, int n)
{
	int x ;
	int i;
	int z;

	for (i = n - 1; i >= n / 2; i--)
	{
		z = n - 1 - i;
		x = a[i];
		a[i] = a[l];
		a[l] = x;
	}

}
