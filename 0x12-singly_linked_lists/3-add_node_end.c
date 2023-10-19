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
	while (*head != NULL)
		*head = (*head)->next;
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	*head = newnode;
	return (newnode);
}
