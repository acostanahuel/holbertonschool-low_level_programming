#include "main.h"
/**
 * print_diagonal - aaaaaaaaaaaa
 * @n: Input number
 */
void print_diagonal(int n)
{
	int e;
	int f;

	if (n > 0)
	{
		for (e = 0; e < n; e++)
		{
			for (f = 0; f < e; f++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
