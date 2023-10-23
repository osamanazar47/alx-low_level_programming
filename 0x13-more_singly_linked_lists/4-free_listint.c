#include "lists.h"
/**
 * free_listint - frees the list
 * @head: the pointer to the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
