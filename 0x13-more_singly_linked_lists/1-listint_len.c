#include "lists.h"
/**
 * listint_len - returns the umber of elements in the list
 * @h: the pointer to the first node
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
