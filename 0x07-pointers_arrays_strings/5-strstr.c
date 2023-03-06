#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer to intial segment of haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, start;

	i = 0;
	j = 0;

	if (needle[0] != '\0')
	{
		nlen++;
	}
	else
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
