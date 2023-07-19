#include <stdio.h>

/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	int count = 4000000;
	int term1 = 1;
	int term2 = 2;
	int next;
	int sum = 2;

	while (next <= count)
	{
		next = term1 + term2;
		if (next % 2 == 0)
		{
			sum = sum + next;
		}
		term1 = term2;
		term2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
