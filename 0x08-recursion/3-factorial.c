#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the intgeral number on which the factorial is found
 *
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error.
 */

int factorial(int n)
{
	int r = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	r = r * factorial(n - 1);
	return (r);
}
