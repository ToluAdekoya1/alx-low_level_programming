#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 upon successful completion
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
