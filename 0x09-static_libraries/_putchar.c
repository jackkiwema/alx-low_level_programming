#include <unistd.h>
#include <errno.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 if success
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	if (write(STDOUT_FILENO, &c, 1) == -1)
	{
		return (-1);
	}
	return (1);
}
