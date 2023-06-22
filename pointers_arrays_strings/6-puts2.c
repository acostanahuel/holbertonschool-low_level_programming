#include <stdio.h>
#include "main.h"
#include <string.h>

/*
 *@str: inmput n
 *
 */

void puts2(char *str)
{
	int i = 0;
	int len = strlen(str);

	for(; str[i] != '\0' ; i++)

		len = i;

	for (i = 0; str[i] != '\0' && (i < len); i += 2)
		putchar (str[i]);

	putchar('\n');
}
