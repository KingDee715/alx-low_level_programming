#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n:  number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k = n, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len = 0; s1[len]; len++)
		k++;

	s = malloc(sizeof(char) * (k + 1));

	if (s == NULL)
		return (NULL);

	k = 0;

	for (len = 0; s1[len]; len++)
		s[k++] = s1[len];

	for (len = 0; s2[len] && len < n; len++)
		s[k++] = s2[len];

	s[k] = '\0';

	return (s);
}
