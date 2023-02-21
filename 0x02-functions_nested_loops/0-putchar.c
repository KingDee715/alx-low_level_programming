#include "main.h"

/**
 * main - entry point
 * description: printing _putchar
 * Return: (0)
 */

int main(void)
{
	char string[9] = "_putchar\n";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(string[i]);
	}
	return (0);
}
