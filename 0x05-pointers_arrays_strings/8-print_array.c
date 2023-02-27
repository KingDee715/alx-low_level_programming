#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: pointer variable
 * @n: integer variable
 * description: prints 'n' elements of an array of integers
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
