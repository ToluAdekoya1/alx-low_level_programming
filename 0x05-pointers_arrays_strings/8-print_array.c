#include <stdio.h>
#include "main.h"

/**
 * print_array - Check the code
 * @a: parameter
 * @n: parameter
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
