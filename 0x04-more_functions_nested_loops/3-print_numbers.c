#include "main.h"
#include <stdio.h>

/**
 * print_numbers - check the code
 *
 * Return: numbers, from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
}
