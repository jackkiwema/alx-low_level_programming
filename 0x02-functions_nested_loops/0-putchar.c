#include "main.h"

/**
 * main - program entrypoint
 *
 * Description: prints -putchar
 *
 * Return: 0 if success
 */

int main(void)
{
	char text[10] = "_putchar";

	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
