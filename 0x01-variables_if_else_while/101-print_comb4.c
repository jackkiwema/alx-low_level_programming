#include <stdio.h>
/**
 * main - program entrypoint
 *
 * Description - print all possible tripple digits
 *
 * Return: 0 if success
 */
int main(void)
{
	int i = 48, j, k;

	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				if (!(i == 48 && j == 48 && k == 48))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55 || j < 56 || k < 57)
					{
						putchar(44);
						putchar(32);
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
