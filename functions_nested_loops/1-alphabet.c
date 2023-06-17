#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet 
 *
 * description: aasdakdña
 *
 * Return: null 
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		putchar(alph);
	}
	putchar ('\n');
}
