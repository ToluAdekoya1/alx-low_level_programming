#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Check the code
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar('0' + i);
		}
	}
	putchar('\n');
}
