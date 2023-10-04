#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int i, j, k, words, len;
	char **result;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		while (*str == ' ')
			str++;
		len = 0;
		while (str[len] != ' ' && str[len] != '\0')
			len++;
		result[i] = malloc((len + 1) * sizeof(char));
		if (result[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(result[k]);
			free(result);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			result[i][j] = *str++;
		result[i][j] = '\0';
	}
	result[i] = NULL;
	return (result);
}
