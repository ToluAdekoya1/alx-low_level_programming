#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes
 * @start: param1
 * @size: parm2
*/
void print_opcodes(unsigned char *start, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%02x", start[i]);
		if (i != size - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
*/
int main(int argc, char *argv[])
{
	int num_bytes;
	unsigned char *main_start;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_start = (unsigned char *)main;
	print_opcodes(main_start, num_bytes);

	return (0);
}
