#include <stdio.h>

/**
 * main - program entrypoint
 *
 * Description - print all possible double digits
 *
 * Return: 0 if success
 */

int main(void)
{
	int i = 48, j;

	while (i <= 57)
	{
		j = i + 1;

		while (j <= 57)
		{
			if (!(i == 48 && j == 48))
			{
				putchar(i);
				putchar(j);

				if (i < 56 || j < 57)
				{
					putchar(44);
					putchar(32);
				}

			}

			j++;

		}

		i++;

	}

	putchar(10);

	return (0);

}
