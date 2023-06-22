#include <stdio.h>
#include <string.h>
#include "main.h"

void 
puts_half(char *str)
{
	
	int len = strlen(str)
	
	if ( len % 2 == 1)
	{
	int n = (len - 1) / 2;

	char lastch[n + 1];

	strncpy(lastch, str + len -n, n);
	lastch[n] = '\0';
	putchar("%s\n", lastch);
	}
}
