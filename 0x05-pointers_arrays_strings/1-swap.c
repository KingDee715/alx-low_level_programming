#include "main.h"

/**
 * swap_int - entry point
 * description: swaps the values of two integers
 * @a: pointer variable 1
 * @b: pointer variable 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
