#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
