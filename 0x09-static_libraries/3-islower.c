#include "main.h"

/**
 * _islower - Check the code
 * @c: parameter to be checked
 * Return: Either 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	return (0);
}
