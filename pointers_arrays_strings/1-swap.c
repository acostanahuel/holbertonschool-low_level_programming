#include <stdio.h>
#include "main.h"

/**
 * swap_int - aaaaaaaa
 * @a: number
 * @b: number
 *
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
