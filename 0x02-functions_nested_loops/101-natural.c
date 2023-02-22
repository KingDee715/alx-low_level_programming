#include <stdio.h>

/**
 * main - entry point
 * description: printing the sum of all the multiples of 3 or 5 up to 102
 * Return: Always (Success)
 */
int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}

		a++;
	}

	printf("%d\n", b);
	return (0);
}
