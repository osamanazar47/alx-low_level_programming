#include "lists.h"
/**
 * print_dlistint - print the elements of the linked list
 * @h: a pointer to the first node
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		element++;
	}
	return (element);
}
