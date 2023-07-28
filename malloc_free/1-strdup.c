#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
	char *cpy;
	int len;
	
	cpy = malloc (sterlen(str) + 1);

	if (!cpy)
		return (NULL);
	

