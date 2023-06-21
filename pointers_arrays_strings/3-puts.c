#include <stdio.h>

/**
 * _puts - aaaaa
 * @str: string 
 * return: bbebebe
 */


void _puts(char *str)
{
	int i = 0;

	for(; str[i] != '\0'; i++)
		
		_putchar(str[i]);

		_putchar('\n');
}
