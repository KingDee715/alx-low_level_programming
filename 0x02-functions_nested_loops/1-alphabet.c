#include "main.h"

/**
 * main - entry point
 * description: printing the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
	return (0);
}
