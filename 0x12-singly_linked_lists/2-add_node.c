#include "lists.h"
/**
 * add_node - adds a new node to the beginning of the list
 * @head: the pointer to the first node
 * @str: the string of the node
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int i, count = 0;

	if (new_node == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
