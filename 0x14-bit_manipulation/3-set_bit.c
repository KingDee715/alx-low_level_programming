#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer
 * @index: the index to set the value
 * Return: If an error occurs - -1
 *         Otherwise - 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n ^= (1 << index);
	return (1);
}

