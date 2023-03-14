#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a new string which is a duplicate of the str
* @str: char
* Return: 0
*/

char *_strdup(char *str)
{
	char *copy;
	int m, n = 0;

	if (str == NULL)

		return (NULL);

	m = 0;

	while (str[m] != '\0')
		m++;

	copy = malloc(sizeof(char) * (m + 1));

	if (copy == NULL)

		return (NULL);

	for (n = 0; str[n]; n++)
		copy[n] = str[n];

	return (copy);
}

