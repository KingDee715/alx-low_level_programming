#include <stdio.h>

/**
 * main - entry point
 * description: prints the lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
