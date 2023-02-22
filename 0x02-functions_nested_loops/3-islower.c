#include "main.h"

/**
 * _islower - entry point
 * description: checking for lowercase character
 * @c: the int value it receives
 * Return: 1 if true. 0 if false
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
