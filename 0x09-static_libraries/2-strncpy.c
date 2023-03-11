#include "main.h"

/**
 * _strncpy - entry point
 * description: Copies a string
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The max number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0';)
	{
		dest[m] = src[m];
		m++;
	}

	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
