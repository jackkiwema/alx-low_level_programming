#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0 if success
 */

int main(void)
{
	int first = 1, second = 2, next;
	int count = 2;

	printf("%d, %d, ", first, second);

	while (count < 98)
	{
		next = first + second;
		printf("%d", next);

		if (count < 97)
		{
			printf(", ");
		}

		first = second;
		second = next;
		count++;
	}
	
	printf("\n");

	return (0);
}
