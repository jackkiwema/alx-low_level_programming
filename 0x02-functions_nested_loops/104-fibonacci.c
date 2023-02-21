#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0 if success
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int i, sum;

	printf("%d, %d", a, b);

	for (i = 3; i <= 98; i++)
	{
		sum = a + b;

		printf(", %d", sum);
		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}
