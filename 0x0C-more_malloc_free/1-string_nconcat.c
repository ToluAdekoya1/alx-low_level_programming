#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings by the first n bytes
 * @s1: string1
 * @s2: string2
 * @n: amount of byte
 * Return: pointer shall point to anewly allocated space in the memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int i;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	output = malloc(sizeof(char) * (s1len + n + 1));
	if (output == NULL)
		return (NULL);
	if (s2len <= n)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			output[s1len + i] = s2[i];
		output[s1len + s2len] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[s1len + i] = s2[i];
		output[s1len + n] = '\0';
	}
	return (output);
}
