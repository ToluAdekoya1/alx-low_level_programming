#include <stdio.h>
#include "main.h"

/**
 * rev_string - Check the code
 * @s: parameter
 * Return: always 0
 */
void rev_string(char *s)
{
	int length = 0;
	int i, j;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
