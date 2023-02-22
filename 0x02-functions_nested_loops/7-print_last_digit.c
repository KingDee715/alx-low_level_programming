#include "main.h"

/**
 * print_last_digit - entry point
 * @n: n is an integer
 * Description: printing the last digit of a number
 * Return: integer
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (n < 0)

	{
		lastdigit = lastdigit * -1;
	}

	_putchar (lastdigit + '0');
	return (lastdigit);
}
