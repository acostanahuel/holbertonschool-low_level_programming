#include <stdio.h>
/*
 * main -aplhabbb
 * return: 0
 */
int main(void)
{
	char ualphabet = 'A';

	while (ualphabet <= 'z')
	{
		putchar(ualphabet);
		ualphabet++;
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
