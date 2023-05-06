#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the bit
 * @index: the index to get the value at - indices start at 0
 * Return: If an error occurs - -1
 *         Otherwise - The value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_value;

	if (index > 63)
		return (-1);

	b_value = (n >> index) & 1;

	return (b_value);
}
