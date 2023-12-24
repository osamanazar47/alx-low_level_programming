#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the table
 * Return: a pointer to the newly created hash table or NULL on fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *newt;

	newt = malloc(sizeof(hash_table_t));
	if (newt == NULL)
		return (NULL);
	newt->size = size;
	newt->array = malloc(sizeof(hash_node_t) * size);
	if (newt->array == NULL)
		return (NULL);
	while (i < size)
	{
		newt->array[i] = NULL;
		i++;
	}
	return (newt);
}
