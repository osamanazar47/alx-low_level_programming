#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: a pointer to a pointer to the first node
 * @index: the index of the node to be deleted
 * Return: 1 on success -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *current;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (-1);
	}
	while (current != NULL && idx != NULL)
	{
		idx++;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
