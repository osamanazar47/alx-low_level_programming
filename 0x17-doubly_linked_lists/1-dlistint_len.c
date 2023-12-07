#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements
 * @h: a pointer to the first node
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements)
}
