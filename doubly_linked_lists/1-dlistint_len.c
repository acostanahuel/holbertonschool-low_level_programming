#include "lists.h"

/**
 *dlistint_len - counts numbr of elements linked
 *@h: the head of the list
 *Return: the number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
