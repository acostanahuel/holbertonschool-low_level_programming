#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcmp - the function compare two string
 * @s1: string one
 * @s2: string two
 *Return: return the diference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
