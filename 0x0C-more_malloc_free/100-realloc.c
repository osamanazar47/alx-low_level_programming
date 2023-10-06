#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: the pointer to the block of memory
 * @old_size: the old size of the block of memory
 * @new_size: the new size of the block of memory
 * Return: pointer to the reallocated block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
		return (ptr1);
	}
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		memcpy(ptr1, ptr, old_size);
	}
	else
	{
		memcpy(ptr1, ptr, new_size);
	}
	free(ptr);
	return (ptr1);
}
