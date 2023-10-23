#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: the pointer to the first node
 * @n: the number that will copied to the new node
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
