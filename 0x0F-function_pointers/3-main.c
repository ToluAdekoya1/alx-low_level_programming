#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: the answer
*/
int main(int argc, char *argv[])
{
	int result;
	int num1;
	char *operator;
	int num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	func = get_op_func(operator);

	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
