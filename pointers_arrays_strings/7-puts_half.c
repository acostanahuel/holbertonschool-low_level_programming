#include <stdio.h>
#include <string.h>
#include "main.h"


void 
puts_half(char *str)
{
	int i = 0;
	int length = 0;

	while (str[length++]);

	for (i = length / 2; str[i]; putchar(str[i++]));

	putchar('\n');
}

int lastch()
{
	char *str = "text";
	puts_half(str);
	return 0;
}
