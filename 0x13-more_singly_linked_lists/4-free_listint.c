#include "lists.h"
/**
 * free_listint - It frees the linked list
 * @head: listint_t the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
