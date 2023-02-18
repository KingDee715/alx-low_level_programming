#include <stdio.h>

/**
 * main - entry point
 * description: prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int k, d;

	for (k = '0'; k <= '9'; k++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			if (k < d)
			{
				putchar(k);
				putchar(d);

				if (k != '8' || (k == '8' && d != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
