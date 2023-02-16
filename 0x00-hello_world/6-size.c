#include <stdio.h>

/**
 * main - print different C type size
 * Return: 0
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;


	printf("Size of a char: %ld byte(s)\n", sizeof(d));
	printf("Size of an int: %ld byte(s)\n", sizeof(a));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(b));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
