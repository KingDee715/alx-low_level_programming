#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: string to concat upon
* @s2: string to concat to s1
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int m, n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++);

	for (n = 0; s2[n] != '\0'; n++);

	concat = malloc(sizeof(char) * (m + n + 1));

	if (concat == NULL)

		return (NULL);

	for (m = 0; s1[m] != '\0');

	{
		concat[m] = s1[m];
		m++;
	}

	for (n = 0; s2[n] != '\0');
	{
		conct[m] = s2[n];
		m++, n++;
	}

	concat[m] = '\0';

	return (concat);
}
