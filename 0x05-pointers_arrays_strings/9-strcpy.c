#include "main.h"

/**
 * *_strcpy - entry point
 * @dest: pointer variable
 * @src: pointer variable
 * description: copies the str pointed to by pointer 'src' pointed to by 'dest'
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
