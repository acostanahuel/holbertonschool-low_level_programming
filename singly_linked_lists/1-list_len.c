#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

size_t 
list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
