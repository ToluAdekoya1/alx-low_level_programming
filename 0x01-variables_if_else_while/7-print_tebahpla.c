#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 upon successful completion
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
