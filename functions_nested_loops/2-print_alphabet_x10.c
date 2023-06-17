#include <stdio.h>
#include "main.h"
/**
 * print - print alphabetx10
 *
 * description: akdjsal
 */
void print_alphabet_x10(void);
{
	char alph;
	
	int i;

	for (i = 0 ; i < 10; i++)
	{
		for(alph = 'a' ; alph <= 'z' : alph++)
		{
			putchar(alph);
		}
		putchar('\n');
	}
}
