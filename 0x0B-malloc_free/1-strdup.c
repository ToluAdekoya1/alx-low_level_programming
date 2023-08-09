#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a pointer
*/
char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		copy[j] = str[j];
	}
	return (copy);
}
