#include <stdio.h>

/**
 * main - program entrypoint
 *
 * Description - print lowercase alphabet letters except q and e
 *
 * Return: return 0 if success
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
