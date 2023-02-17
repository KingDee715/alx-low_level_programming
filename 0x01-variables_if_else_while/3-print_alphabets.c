#include <stdio.h>

/**
 * main - entry point
 * description: prints alphabets in lowercase then uppercase
 * Return: 0
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char _alp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(alp[j]);
	}
	putchar('\n');
	return (0);
}

