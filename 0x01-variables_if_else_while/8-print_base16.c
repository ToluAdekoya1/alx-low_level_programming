#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if suceeded
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
