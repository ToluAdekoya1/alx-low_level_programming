#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - Check the code
 * @dest: parmeter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[length + i] = *src;
		src++;
	}
	dest[length + i] = '\0';
	return (dest);
}
