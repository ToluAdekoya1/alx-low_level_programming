#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: the sum of a and b
*/

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: the difference of a and b
*/

int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - multiples two numbers
 * @a: first number
 * @b: second number
 * Return: the product of a and b
*/

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: the result of the division of a and b
*/

int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - finds the modulus two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder of the division of a and b
*/

int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
