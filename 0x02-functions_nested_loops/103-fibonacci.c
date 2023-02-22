#include <stdio.h>
/**
 * main - entry point
 * description: computing and printing even number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int x = 0, y = 1, next = 0;
	int add = 0;

	while (next < 4000000)
	{
		next = x + y;
		x = y;
		y = next;
		if (next % 2 == 0)
			add += next;
	}
	printf("%i\n", add);
	return (0);
}
