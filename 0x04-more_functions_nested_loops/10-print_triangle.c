#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Check the code
 * @size: parameter
 * Return: always 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (i = 1; i <= size; ++i)
	{
		for (j = 0; j < size - i; ++j)
		{
			putchar(' ');
		}

		for (k = 0; k < i; ++k)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
