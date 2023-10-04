#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: an array of arguments
 * Return: pointer to the new string if success and NULL if not
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0;
	int length = 0;
	char *s;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	s = malloc((length + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcpy(s + j, av[i]);
		j += strlen(av[i]);
		s[j] = '\n';
		j++;
	}
	s[j] = '\0';
	return (s);
}
