#include "lists.h"
/**
 * pop_listint - deletes the head node of the list and return its data
 * @head: a pointer to a pointer to the first node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
		return (0);
	current = *head;
	*head = (*head)->next;
	data = current->n;
	return (data);
}
