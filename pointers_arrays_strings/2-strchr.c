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
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
