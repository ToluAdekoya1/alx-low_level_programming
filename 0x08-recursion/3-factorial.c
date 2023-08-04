#include <stdio.h>
#include "main.h"

/**
 * factorial - Check the code
 * @n: parameter
 * Return: always 1
*/
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
