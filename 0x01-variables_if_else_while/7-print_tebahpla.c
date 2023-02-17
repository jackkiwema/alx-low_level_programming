#include <stdio.h>

/**
 * main - program entry point
 * Description - print lowercase alphabets in reverse
 * Return: return 0 if success
 */

int main(void)
{
	for (int i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
