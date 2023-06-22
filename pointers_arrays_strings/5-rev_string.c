i#include <stdio.h>
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
	char str[1000];

	strcpy(str, s);
	len--;
	if (len < 0)
	{
		for (i = 0; i <= (len / 2); i++)
		{
			change = str[i];
			s[i] = str[(len - i)];
			s[(len - i)] = change;
		}
	}

}
