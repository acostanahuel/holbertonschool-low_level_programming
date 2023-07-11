#include <stdio.h>
#include "main.h"

void
*_calloc(unsigned int nmeb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmeb = 0  || size == 0)
		return (NULL);

	mem = malloc (size * nmeb);

	if (mem = NULL)
		return (NULL);

	filler = mem;

	for ( index = 0; index < (size * nmeb); index++)
		filler[index] = '\0';

	return (mem);
}
