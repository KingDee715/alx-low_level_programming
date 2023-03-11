#include "main.h"

/**
 * _puts - entry point
 * description: prints a string to stdout
 * @str: pointer to a string to print
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
