#include "lists.h"
/**
 * sum_dlistint - sums all the data of the linked list
 * @head: a pointer to the first node
 * Return: the sum of the data or zero if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
