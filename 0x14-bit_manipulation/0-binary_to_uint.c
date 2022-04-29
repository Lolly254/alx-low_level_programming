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
	int slen = strlen(b);
	int total = 0;
	int decval = 1;

	if (b == NULL)
		return (0);
	int i = (slen - 1);

	while (i >= 0)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
		{
			total += decval;
		}
		i--;
		decval *= 2;
	}
	return (total);
}
