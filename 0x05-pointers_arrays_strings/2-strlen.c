#include <stdio.h>
#include "main.h"

/**
 * _strlen - Check the code
 * @s: param
 * Return: always 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
