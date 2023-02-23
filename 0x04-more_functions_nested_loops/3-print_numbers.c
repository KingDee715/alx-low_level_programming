#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 * return: void
 */

void print_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)

	{
		_putchar (b + '0');
	}
	_putchar ('\n');
}
