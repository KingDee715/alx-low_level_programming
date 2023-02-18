#include <stdio.h>

/**
 * main - entry point
 * description: prints all singlr digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
	}
	putchar('\n');
	return (0);
}
