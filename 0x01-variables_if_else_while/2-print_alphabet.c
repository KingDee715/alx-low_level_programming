#include <stdio.h>

/**
 * main - entry point
 * description: prints the alphabet in lower case.
 * Return: 0
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxzy";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

