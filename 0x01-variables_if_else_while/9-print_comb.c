#include <stdio.h>

/**
 * main - program entrypoint
 *
 * Description - prints numerals with comma followed by space
 *
 * Return: 0 if success
 */

int main(void)
{

	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar(10);

	return (0);
}
