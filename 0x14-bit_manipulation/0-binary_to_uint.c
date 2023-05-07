#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 *         Otherwise - the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		val = 2 * val + (b[x] - '0');
	}

	return (val);
}
