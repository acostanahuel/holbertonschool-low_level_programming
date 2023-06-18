#include <stdio.h>
#include "main.h"
/**
 *times_table - times table
 *@a: inmput a number
 *@b: input a number
 *Return: result
 *
 */
void times_table(void)
{
	int a, b;

	for(a = 0; a <= 10; a++)
	{
		for(b = 0; b <= 10; b++)
		{
			int result= a * b;
			if (result < 10)
			{
				_putchar(result + '0');
			} else 
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
