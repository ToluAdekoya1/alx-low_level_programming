#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: points to a newly allocated space in memory
*/
char *str_concat(char *s1, char *s2)
{
	char *alloc;
	int i, count1, count2, size;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	count1 = 0;
	count2 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		count1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		count2++;
	}
	size = (count1 + count2) + 1;
	alloc = malloc(sizeof(char) * size);
	if (alloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		alloc[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		alloc[count1 + i] = s2[i];
	}
	return (alloc);
}
