#include <stdlib.h>
#include "lists.h"
/**
 * list_len - It returns the number of elements in the linked list
 * @h: the pointer to the list_t list
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
