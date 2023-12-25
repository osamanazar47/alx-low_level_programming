#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table
 * @key: the key of the hash
 * @value: the value associated
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index, i;
	char *vcopy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	vcopy = strdup(value);
	if (vcopy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vcopy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(vcopy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = vcopy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
