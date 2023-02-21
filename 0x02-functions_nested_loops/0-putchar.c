#include <stdio.h>

/**
 * main - program entrypoint
 *
 * Description: prints -putchar
 *
 * Return: 0 if success
 */

int main(void)
{
	char text[8] = "_putchar";

	int i = 0;

	for (i = 0; i <= 8; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');

	return (0);
}
