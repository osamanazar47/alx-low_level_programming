#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: a pointer to the first node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head);
		head = n
	}
}
