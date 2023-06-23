#include <stdio.h>
#include <string.h>
#include "main.h"


void
puts_half(char *str)
{
	int i = 0;
	int len;

	for (; str[i] != '\0'; i++)
		continue;

	len = i;

	if (len % 2 != 0)
		for (i = ((len / 2) + 1); (str[i] != '\0'); i++)
			putchar(str[i]);
	else
		for (i = (len / 2); (str[i] != '\0'); i++)
			putchar(str[i]);

	putchar('\n');
}
