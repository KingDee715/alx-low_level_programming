#include "main.h"

/**
 * main - entry point
 * description: printing the alphabets in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

