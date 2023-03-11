#include "main.h"

/**
 * _strcmp - entry point
 * description: compares two strings
 * @s1: pointer variable
 * @s2: pointer variable
 * Return: s1[m] - s2[m]
 */
int _strcmp(char *s1, char *s2)
{
	int m;

	for (m = 0; s1[m] != '\0' && s2[m] != '\0';)
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
