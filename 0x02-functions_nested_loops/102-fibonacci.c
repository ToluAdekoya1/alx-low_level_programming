#include <stdio.h>

/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int next;
	int i;
	int count = 50;

	printf("%ld, ", term1);
	for (i = 1; i < count; i++)
	{
		printf("%ld", term2);
		if (i != count - 1)
			printf(", ");
		next = term1 + term2;
		term1 = term2;
		term2 = next;
	}
	printf("\n");
	return (0);
}
