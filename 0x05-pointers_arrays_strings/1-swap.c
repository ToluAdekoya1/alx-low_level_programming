#include <stdio.h>
#include "main.h"

/**
 * swap_int - Check the code
 * @a: param1
 * @b: param2
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}
