#include <stdio.h>

/**
 * main - program entrypoint
 *
 * Description - print double digits
 *
 * Return: 0 if success
 */

int main(void)
{
	int i, j = 48;

	while (i < 58)
	{
		j += 1;
		
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}

	putchar(10);

	return (0);
}
