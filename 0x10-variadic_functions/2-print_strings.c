#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *s;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(arg);
}
