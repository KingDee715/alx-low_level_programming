#include "main.h"

/**
 * _strncat - entry point
 * description: concatenates two strings using at most n bytes from src
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The n of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int o;

	for (m = 0; dest[m] != '\0';)
	{
		m++;
	}

	for (o = 0; o < n && src[o] != '\0';)
	{
		dest[m] = src[o];
		m++;
		o++;
	}
	dest[m] = '\0';
	return (dest);
}
