#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - It adds a new node in every beginning of a linked list
 * @head: a double pointer to the list_t list
 * @str: a new string to add in the node
 * Return: The address of the new element or in case of fail the NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
