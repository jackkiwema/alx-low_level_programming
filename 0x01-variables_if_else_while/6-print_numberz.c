#include <stdio.h>

/**
 * main - program entry point
 *
 * Description - print numerals 0 - 9
 *
 * Return: return 0 if success
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
