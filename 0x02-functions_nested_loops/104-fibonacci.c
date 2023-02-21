#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0 if success
 */

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 3; i < 92; i++)
	{
		unsigned long sum = a + b;

		printf(", %lu", sum);
		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}
