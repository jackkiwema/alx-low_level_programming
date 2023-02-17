#include <stdio.h>

/**
 * main - program entrypoint
 * Description - prints numerals with comma followed by space
 * Return: 0 if success
 */

int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
