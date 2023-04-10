#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars.
 * Return: if b is NULL or contains chars not 0 or 1 - 0.
 *         otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b[i] == '\0')
		return (0);

	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		num <<= 1;
		num += b[len] - '0';
	}

	return (num);
}
