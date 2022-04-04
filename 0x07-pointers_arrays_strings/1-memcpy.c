#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes copied
 * @dest: the destination of the copied memory
 * @src: the source of the copied memory
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

