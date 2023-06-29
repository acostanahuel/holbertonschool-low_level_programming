#include "main.h"

/**
 * _memcpy - sript function
 * @dest: destination of string?
 * @src: the content of string?
 * @n: nnnn
 * Return: aaaaaaaaaaaa
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
