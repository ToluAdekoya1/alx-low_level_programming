#include <stdio.h>
#include "main.h"

/**
 * print_rev - Check the code
 * @s: parameter
 * Return: always 0
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	i = length;
	while (i != '\0')
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
