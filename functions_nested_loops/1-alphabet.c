#include <stdio.h>
#include "main.h"
/**
 * main - print alphabet 
 *
 * description: aasdakdña
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		putchar(alph);
	}
	putchar ('\n');

	return (0);
}
