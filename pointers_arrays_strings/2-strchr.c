#include <stdio.h>
#include "main.h"

/**
 *_strchr - locates the last occurrence of a character in a string and returns a pointer to it
 *@s: string
 *@c: first occurrence
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
	}

	return (0);
}
