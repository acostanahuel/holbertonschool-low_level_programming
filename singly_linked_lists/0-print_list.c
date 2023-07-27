#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t 
print_list(const list_t *h)
{
	
	const list_t *p;
	size_t k = 0;

	p = h;
	while (p)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d]%s\n", p->len, p->str);
		k++;
		p=p->next;
		
	}
	return(k);
}
