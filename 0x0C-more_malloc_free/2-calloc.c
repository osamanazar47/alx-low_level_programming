#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements of the array
 * @size: the size of the single element
 * Return: pointer to the array in success,NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
