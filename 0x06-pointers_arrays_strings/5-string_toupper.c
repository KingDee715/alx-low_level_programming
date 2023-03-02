#include "main.h"

/**
 * string_toupper - entry point
 * description: changes all lowercase letters of a string to uppercase
 * @p: pointer variable
 * Return: p
 */

char *string_toupper(char *p)
{
	int m;

	for (m = 0; p[m] != '\0';)
	{
		if (p[m] >= 'a' && p[m] <= 'z')
			p[m] = p[m] - 32;
		m++;
	}
	return (p);
}
