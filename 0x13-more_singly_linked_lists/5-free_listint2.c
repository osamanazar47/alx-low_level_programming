#include "lists.h"
/**
 * free_listint2 - frees the list and sets the head to null
 * @head: a pointer to a pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	current = NULL;
}
