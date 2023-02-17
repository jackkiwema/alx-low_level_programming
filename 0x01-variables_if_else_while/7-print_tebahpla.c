#include <stdio.h>

/**
 * main - program entry point
 *
 * Description - print lowercase alphabets in reverse
 *
 * Return: return 0 if success
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);

}
