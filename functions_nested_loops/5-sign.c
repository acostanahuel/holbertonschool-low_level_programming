#include <stdio.h>
#include "main.h"
/**
 *isalnum: askdljadljalk
 *@n: input number
 *Return:
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
