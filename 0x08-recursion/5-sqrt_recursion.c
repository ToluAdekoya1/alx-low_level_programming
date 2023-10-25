#include <stdio.h>
#include "main.h"

/**
 * sqrt_helper - Another function
 * @guess: parameter
 * @n: parameter
 * Return: always 1
*/
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - Check the code
 * @n: parameter
 * Return: always 1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}
