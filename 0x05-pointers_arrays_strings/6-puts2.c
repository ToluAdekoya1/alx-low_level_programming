#include <stdio.h>
#include "main.h"

/**
 * puts2 - Check the code
 * @str: parameter
 * Return: always 0
 */
void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return;
	}
	while (i != '\0')
	{
		putchar(str[i]);
		i = i + 2;
	}
	putchar('\n');
}
