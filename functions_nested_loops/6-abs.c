#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_abs - absolute value of an integer
 *@n: input a number
 *Return: absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
