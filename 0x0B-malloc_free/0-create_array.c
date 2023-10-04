#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the characters of the array
 * Return: NULL if size is 0 , o if success
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char*)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
