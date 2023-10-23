#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: a pointer to a pointe to the first node
 * @n: the number in the node
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	current = *head;
	if (current == NULL)
		*head = newnode;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
	}
	return (newnode);
}
