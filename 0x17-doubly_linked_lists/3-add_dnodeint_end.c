#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a pointer to a pointer to the first node
 * @n: the value in each node
 * Return: the address of the new node or null on fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = new;
	new->n = n;
	new->next = NULL;
	new->prev = *head;
	return (new);
