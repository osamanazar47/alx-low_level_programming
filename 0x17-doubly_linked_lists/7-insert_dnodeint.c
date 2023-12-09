#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: a pointer to a pointer to the first node
 * @idx: the index
 * @n: the value inside the new node
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *current = **h;
	unsigned int index = 0;

	if (current == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	while (current != NULL && index != idx)
	{
		index++;
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	newnode->next = current;
	newnode->prev = current->prev;
	current->prev = newnode;
	return (newnode);
}
