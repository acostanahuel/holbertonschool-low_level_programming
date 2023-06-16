#include <stdio.h>
/*
 * main -aplhabbb
 * return: 0
 */
int main(void)
{
	char alphabet = 'A';

	for (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	for (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
