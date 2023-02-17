#include <stdio.h>

/**
 * main - program entrypoint
 * Description - prints lowercase base16
 * Return: 0 if success
 */

int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (int j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar(10);

	return (0);
}
