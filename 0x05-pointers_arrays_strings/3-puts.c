#include <stdio.h>
#include "main.h"

/**
 * _puts - Check the code
 * @str: paremter
 * Return: A string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
