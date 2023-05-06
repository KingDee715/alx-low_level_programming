#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 *         Otherwise - the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int fig = 0;
	int i = 0;

	if (b[i] == '\0')
		return (0);

	while ((b[i] == '0') || (b[i] == '1'))
	{
		fig <<= 1;
		fig = fig + b[i] - '0';
		i++;
	}

	return (fig);
}
