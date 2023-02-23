#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: integer variable
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size && size > 0; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (i == 1)
		_putchar('\n');
}
