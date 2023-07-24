#include <stdio.h>
#include "main.h"

/**
 * puts_half - Check the code
 * @str: parameter
 * Return: always 0
 */
void puts_half(char *str)
{
	int i, n;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	n = (length - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
