#include <stdio.h>
#include "main.h"

/**
 * prime - Check the code
 * @n: parameter
 * @guess: parameter
 * Return: -1, 0 or 1
*/
int prime(int n, int guess)
{
	if (guess != 1 && guess != n)
	{
		if (guess > n)
		{
			return (1);
		}
		else if (n % guess == 0)
		{
			return (0);
		}
	}
	return (prime(n, guess + 1));
}

/**
 * is_prime_number - Check the code
 * @n: parameter
 * Return: -1, 0 or 1
*/
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (prime(n, 1));
	}
	return (0);
}
