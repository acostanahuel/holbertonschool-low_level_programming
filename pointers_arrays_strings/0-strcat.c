#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - print catenates 
 * @dest: destination of string
 * @src: where is the string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int strlenght = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[strlenght + i] = src [i];
	}
		dest[strlenght + i] = '\0';
		return (dest);
}
