#include <stdio.h>
#include "main.h"
#include <string.h>

void
puts2(char *str)
{
	int i = 0;
	int len = strlen(str);

	for (i = 0; i < len; i++)

		if (i % 2 == 0)
		{
			putchar (str[i]);
		}
	putchar ('\n');
}
