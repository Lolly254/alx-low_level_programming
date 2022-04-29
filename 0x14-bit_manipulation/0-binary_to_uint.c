#include "main.h"

/**
 * binary_to_uint - is a function that converts a binary number
 * to an unsigned int
 * @b: is a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number if b is not NULL
 * or there is one or more chars in the string that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return(dec_val);
