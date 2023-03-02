#include "main.h"

/**
 * rot13 - entry point
 *description: encodes a string using rot13
 * @p: pointer variable
 * Return: A pointer to the encoded string.
 */
char *rot13(char *p)
{
	int m;
	int n;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alprot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; p[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (p[m] == alp[n])
			{
				p[m] = alprot[n];
				break;
			}
		}
	}
	return (p);
}
