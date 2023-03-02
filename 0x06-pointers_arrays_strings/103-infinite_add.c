#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int m = 0;
	int o = 0;
	char temp;

	while (*(n + m) != '\0')
	{
		m++;
	}
	m--;

	for (o = 0; o < m; o++, m--)
	{
		temp = *(n + o);
		*(n + o) = *(n + m);
		*(n + m) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer variable
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int favor = 0, m = 0, o = 0, digits = 0;
	int da1 = 0, da2 = 0, temp_tot = 0;

	while (*(n1 + m) != '\0')
		m++;
	while (*(n2 + o) != '\0')
		o++;
	m--;
	o--;
	if (o >= size_r || m >= size_r)
		return (0);
	while (o >= 0 || m >= 0 || favor == 1)
	{
		if (m < 0)
			da1 = 0;
		else
			da1 = *(n1 + m) - '0';
		if (o < 0)
			da2 = 0;
		else
			da2 = *(n2 + o) - '0';
		temp_tot = da1 + da2 + favor;
		if (temp_tot >= 10)
			favor = 1;
		else
			favor = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		o--;
		m--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

