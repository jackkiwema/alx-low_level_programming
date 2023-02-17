#include <stdio.h>

/**
 * main - program entry point
 *
 * Description - print 0 - 9 numerals
 *
 * Return: return 0 if success
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
