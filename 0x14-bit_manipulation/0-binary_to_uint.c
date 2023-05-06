#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 *         Otherwise - the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b[i] == '\0')
		return (0);

	while ((b[i] == '0') || (b[i] == '1'))
	{
		num <<= 1;
		num = num + b[i] - '0';
		i++;
	}

	return (num);
}
