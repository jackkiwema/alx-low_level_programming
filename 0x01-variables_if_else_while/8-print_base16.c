#include <stdio.h>

/**
 * main - program entrypoint
 *
 * Description - prints lowercase base16
 *
 * Return: 0 if success
 */

int main(void)
{
	int i = 48;
	int j = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	while (j <= 102)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
