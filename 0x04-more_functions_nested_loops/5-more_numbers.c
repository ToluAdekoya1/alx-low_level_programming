#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Check the code
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				putchar('0' + j / 10);
			}
			putchar('0' + j % 10);
		}
		putchar('\n');
	}
}
