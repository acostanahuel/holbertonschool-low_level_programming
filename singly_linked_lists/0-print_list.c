#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t
print_list(const list_t *h)
{

	size_t k = 0;


	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		k++;
		h = h->next;

	}
	return (k);
}
