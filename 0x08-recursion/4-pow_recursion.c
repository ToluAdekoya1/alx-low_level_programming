#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Check the code
 * @x: param1
 * @y: param2
 * Return: any value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return(-1);
	}
	else if (y != 0)
	{
		return(x * _pow_recursion(x, y - 1));
	}
	return (1);
}
