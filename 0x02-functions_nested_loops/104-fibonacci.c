#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0 if success
 */

int main(void)
{
	unsigned long long a = 1;
	unsigned long long b = 2;
	int i, sum;

	printf("%llu, %llu", a, b);

	for (i = 3; i <= 98; i++)
	{
		unsigned long long sum = a + b;

		printf(", %llu", sum);
		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}
