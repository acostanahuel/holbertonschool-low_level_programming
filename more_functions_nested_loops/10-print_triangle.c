#include "main.h"

/**
 * print_triangle - aaaaaaaaaa
 * @size: The size of the triangle
 *
*/

void print_triangle(int size)
{
	int i, x, spaces, blocks;

	if (size > 0)
	{
		blocks = 0;
		for (i = 0; i < size; i++)
		{
			spaces = size - i;
			while (spaces > 1)
			{
				_putchar(' ');
				spaces--;
			}
			while (blocks <= i)
			{
				for (x = 0; x <= blocks; x++)
				{
					_putchar('#');
				}
				blocks++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
