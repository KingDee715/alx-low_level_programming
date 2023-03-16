#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each array element
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;
	char *f;
	unsigned int len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(size * nmemb);

	if (pt == NULL)
		return (NULL);

	f = pt;

	for (len = 0; len < (size * nmemb); len++)
		f[len] = '\0';

	return (pt);
}
