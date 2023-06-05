#include "lists.h"
/**
 * print_listint - It prints all the elements of a linked list
 * @head: The linked list of type listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t num = 0;

	while (head)
	{
		printf("%d\n", head->n);
		num++;
		head = head->next;
	}
	return (num);
}
