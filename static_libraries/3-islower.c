#include <stdio.h>
#include "main.h"
/**
 *_islower - Return 1 if c is lowcase and 0 if else
 * @c: input number
 *Return: 1 if lower, 0 if else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
