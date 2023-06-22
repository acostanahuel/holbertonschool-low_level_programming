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

	len = i - 1;
	for (i = 0; i <= (len / 2); i++)
	{
		change = s[i];
		s[i] = s[(len - i)];
		s[(len - i)] = change;
	}

}
