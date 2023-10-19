#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list
 * @head: the pointer to the first node
 * @str: the string that will be duplicated
 * Return: the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i, count = 0;
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		(*head)->next = newnode;
	}
	return (newnode);
}
