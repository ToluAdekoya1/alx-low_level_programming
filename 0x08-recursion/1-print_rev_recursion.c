#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Check the code
 * @s: Parameter
 * Return: Always 0
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
