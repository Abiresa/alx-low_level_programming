#include "lists.h"
/**
 * get_nodeint_at_index - It returns the node to a certain index in the
 * linked list
 * @head: The first node in the linked list
 * @index: The index of the node that needs to be returned
 * Return: The pointer to the node in question or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
