#include <stdio.h>

/**
 * main - print lowercase alphabet letters
 * Description - runs main
 * Return: return 0 if success
 */

int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
