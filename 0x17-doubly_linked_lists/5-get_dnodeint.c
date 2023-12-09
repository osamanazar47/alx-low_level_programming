#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of the linked list
 * @head: a pointer to the first node
 * @index: the index of the node to be returned
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL && idx != index)
	{
		idx++;
		head = head->next;
	}
	return (head);
}
