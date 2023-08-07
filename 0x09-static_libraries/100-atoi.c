#include <stdbool.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _atoi - Check the code
 * @s: parameter
 * Return: always 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	while (s[i])
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (sign == 1 && (result > INT_MAX / 10 ||
		 (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)))
		{
			return (INT_MAX);
		}
		else if  (sign == -1 &&
			(result < INT_MIN / 10 ||
			 (result == INT_MIN / 10 && s[i] - '0' > -(INT_MIN % 10))))
		{
			return (INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
