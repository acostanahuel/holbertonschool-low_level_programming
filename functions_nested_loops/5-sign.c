#include <stdio.h>
#include "main.h"
/**
 *print_sign - askdljadljalk
 *@n: input number
 *Return: 1 if n is positive, 0 if is zero, -1 if is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
