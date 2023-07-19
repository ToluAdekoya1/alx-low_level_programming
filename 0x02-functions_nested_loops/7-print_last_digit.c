#include "main.h"

/**
 * print_last_digit - Check the code
 * @a: parameter
 * Return: The number
 */
int print_last_digit(int a)
{
	int lastDigit;

	lastDigit = a % 10;
	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
