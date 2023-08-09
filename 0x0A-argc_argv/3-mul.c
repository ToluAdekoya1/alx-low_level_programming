#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
*/
int main(int argc, const char *argv[])
{
	int i, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		i = a * b;
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
