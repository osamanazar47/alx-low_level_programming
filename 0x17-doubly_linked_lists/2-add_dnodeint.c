#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: a pointer to a pointer to the first node
 * @n: the value of the node
 * Return: the address of the new node or null on fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL || head == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	if (newnode->next != NULL)
		(newnode->next)->prev = newnode;
	return (newnode);
}
