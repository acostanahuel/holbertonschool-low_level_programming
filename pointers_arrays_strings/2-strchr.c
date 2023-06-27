#include <stdio.h>
#include "main.h"

/**
 *_strchr - locates the last occurrence
 *
 *@s: string
 *@c: first occurrence
 *
 *return: aaaaaaaaa
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
