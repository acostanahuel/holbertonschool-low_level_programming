#include "main.h"
/**
 * print_square - times square
 * @n: Input number
 */
void print_square(int n)
{
	int j;
	int k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
