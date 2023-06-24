#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - aaaaaaaaaaaa
 * @dest: destination to copy the string to
 * @src: source of the string to copy
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= (int) strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

