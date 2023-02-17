#include <stdio.h>

/**
 * main - program entrypoint
 * Description - print lowercase alphabet letters except q and e
 * Return: return 0 if success
 */

int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		{
			if (i != 101 && i != 113)
			{
				putchar(i);
			}
		}
	}
	putchar('\n');

	return (0);
}
