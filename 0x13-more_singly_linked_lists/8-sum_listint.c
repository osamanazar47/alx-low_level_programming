#include "lists.h"
/**
 * sum_listint - return the sum of all the data in the list
 * @head: a pointer tot the first node
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
