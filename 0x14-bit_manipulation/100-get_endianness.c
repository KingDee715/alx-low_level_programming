#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: If big-endian - 0
 *         If little-endian - 1
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *b = (char *) &i;

	return (*b);
}

