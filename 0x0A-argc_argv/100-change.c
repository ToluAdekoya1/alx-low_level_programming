#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int coinsUsed = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coinsUsed += cents / 25;
	cents = cents % 25;

	coinsUsed += cents / 10;
	cents = cents % 10;

	coinsUsed += cents / 5;
	cents = cents % 5;

	coinsUsed += cents;

	printf("%d\n", coinsUsed);

	return (0);
}
