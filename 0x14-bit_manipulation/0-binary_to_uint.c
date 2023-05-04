#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string
 * Return: the converted number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int num_ber = 0;

	if (b[c] == '\0')
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		num_ber = 2 * num_ber + (b[c] - '0');
	}

	return (num_ber);
}

