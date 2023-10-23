#include "lists.h"
/**
 * reverse_listint - reverses the linked list
 * @head: a pointer to a pointer to the first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextnode, *previous = NULL;

	while (*head != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = nextnode;
	}
	return (previous);
}
