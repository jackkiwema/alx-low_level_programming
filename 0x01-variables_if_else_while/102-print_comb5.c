# include <stdio.h>

/** 
 * main - program entrypoint 
 *
 * Description - prints double array of numbers from 00 - 99
 *
 * Return: 0 if success
 */

int main(void)
{
	int i, j = 0;

	while (i <= 99)
	{
		j = i + 1;

		while (j <= 99)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(32);
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (i != 98 || j != 99)
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
