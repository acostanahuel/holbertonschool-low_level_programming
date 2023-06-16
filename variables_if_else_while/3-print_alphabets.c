#include <stdio.h>
/*
 * main -aplhabbb
 * return: 0
 */
int main(void)
{
	char alphabet = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	char alphabet = 'a';

	for (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
