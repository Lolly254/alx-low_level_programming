#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 *  Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	double sum = 0;
	unsigned int x;
	va_list a_list;
	if (n == 0)
	{
		return (0);
	}

	va_start(a_list, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(a_list, unsigned int);
	}
	va_end(a_list);
	return (sum);
}

