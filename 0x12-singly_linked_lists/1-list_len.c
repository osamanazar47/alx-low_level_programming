#include "lists.h"
/**
 * list_len - a func that returns the number of elements in a linked list
 * @h: the pointer to the first node
 * Return: the number of elemets in the list
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element++;
		h = h->next;
	}
	return (element);
}
