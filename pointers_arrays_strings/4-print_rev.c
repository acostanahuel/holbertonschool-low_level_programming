#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *print_rev - aaaaa
 *@s: string
 * return: bbebebe
 */


#include <stdio.h>

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}


	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}

/*
 *
 *srev - aaaaaaaaaaaa da vuelta el print
 */


int srev(void)
{
	char *s = "text";

	printf("string: %s\n", s);

	print_rev(s);

	return (0);
}
