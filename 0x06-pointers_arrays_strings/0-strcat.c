#include "main.h"

/**
 * *_strcat - entry point
 * description: concatenates two strings
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	for (m = 0; dest[m] != '\0';)
	{
		m++;
	}

		for (n = 0; src[n] != '\0';)
		{
			dest[m] = src[n];
			m++;
			n++;
		}
	dest[m] = '\0';
	return (dest);
}
