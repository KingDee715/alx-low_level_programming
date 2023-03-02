#include "main.h"

/**
 * leet - Encodes a string to 1337speak
 * @p: pointer variable
 * Return: p
 */
char *leet(char *p)
{
	int m, n;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; p[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (p[m] == s1[n])
			{
				p[m] = s2[n];
			}
		}
	}
	return (p);
}
