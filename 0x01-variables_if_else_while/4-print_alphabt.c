#include <stdio.h>

/**
 * main -entry
 * description: prints the alphabets in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(alp[i]);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}

