#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array of integers
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to function to be used to compare values
 * Return: 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]) != 0)
			return (m);
	}

	return (-1);
}
