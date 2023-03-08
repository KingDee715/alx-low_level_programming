#include "main.h"

/**
 * evaluate_num - checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 * Return: return  1 or 0
 */

int evaluate_num(int num, int div)
{
	if (div == num - 1)
	return (1);

	if (num % div == 0)
	return (0);

	if (num % div != 0)
	return (evaluate_num(num, div + 1));

	return (0);
}

/**
 * is_prime_number - Checks if a number is prime or not
 * @n: The number to be checked.
 * Return: return 1 if prime or 0 if otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n < 2)
	return (0);

	if (n == 2)
	return (1);

	return (evaluate_num(n, div));
}
