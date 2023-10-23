#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: the pointer to the first node
 * @index: the index of the node we want to return
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (index != n && n <= index)
	{
		n++;
		head = head->next;
	}
	if (index == n)
		return (head);
	else
		return (NULL);
}
