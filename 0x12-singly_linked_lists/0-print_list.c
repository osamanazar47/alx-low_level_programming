#include "lists.h"
/**
 * print_list - prints the elements of the list
 * @h: the pointer to the first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		if (current->str)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		count++;
		current = current->next;
	}
	return (count);
}
