#include <stdio.h>

/**
 * main - print lowercase alphabet letters
 * Description - runs main
 * Return: return 0 if success
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
