#include "main.h"

/**
 * flip_bits - returns the number of bits needed to
 *             flip to get from one number to another
 * @n: the number
 * @m: the number to flip n to
 * Return: the necessary number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int q = 63, count = 0;
	unsigned long int cur;
	unsigned long int exc = n ^ m;

	for (; i >= 0; i--)
	{
		cur = exc >> i;
		if (cur & 1)
			count++;
	}

	return (count);
}

