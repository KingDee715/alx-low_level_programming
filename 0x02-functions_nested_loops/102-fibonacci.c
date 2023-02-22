#include <stdio.h>

/**
 * main - entry point
 * description: printing the first 32 fibonacci numbers
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long p = 1, q = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", p);
		else if (i == 1)
			printf(", %ld", q);
		else
		{
			q += p;
			p = q - p;
			printf(", %ld", q);
		}

		++i;
	}

	printf("\n");
	return (0);
}
