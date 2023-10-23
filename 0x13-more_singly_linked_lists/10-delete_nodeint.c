#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: a pointer to a pointer to the first node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *current = *head, *previous = NULL;

	while (num < index && current != NULL)
	{
		num++;
		previous = current;
		current = current->next;
	}
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	else if (index == num && current != NULL)
	{
		previous->next = current->next;
		return (1);
	}
	else
		return (-1);
}
