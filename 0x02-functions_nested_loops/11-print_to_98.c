#include "main.h"

/**
 * main - print natural numbers
 *
 * Return: 0 if success
 */

void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(',');
		_putchar(' ');
		if (n < 98)
		{
			i++;
		}
		else
		{
			i--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
