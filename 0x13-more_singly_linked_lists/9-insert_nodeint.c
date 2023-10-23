#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the first node
 * @idx: the index that the node will be inserted in
 * @n: the data of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;
	listint_t *current = *head, *previous = NULL;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	while (num < idx && current != NULL)
	{
		num++;
		previous = current;
		current = current->next;
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else if (idx == num)
	{
		newnode->next = current;
		previous->next = newnode;
	}
	else
	{
		free(newnode);
		return (NULL);
	}
	return (newnode);
}
