#include <stdio.h>
#include "main.h"
#include <string.h>


#include "main.h"

/**
 * rev_string - rev string
 * @s: aaaaaaa
 * Return: bbbbbbbei
 */

void rev_string(char *s)
{
	int i = 0;
	int len = strlen(s);
	char change;
	char str[100];

	strcpy(str, s);
	len--;
	for (i = 0; i <= (len / 2); i++)
	{
		change = str[i];
		s[i] = str[(len - i)];
		s[(len - i)] = change;
	}

}
