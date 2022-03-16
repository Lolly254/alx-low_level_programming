#include "main.h"

/**
 * print_sign - Determines if the input number
 * greater, iqual or less than zero.
 *
 * @n: the input integer
 *
 * Return: 1 if the number is positive, 0 if
 * the number is 0 and -1 if the number is less than 0
 */
int print_sign(int n)
{
int k;
if (k > 0)
{
putchar(+);
return (1);
}
else if (k < 0)
{
putchar(-);
return (-1);
}
else if (k == 0)
{
putchar(0);
return (0);
}
putchar('\n');
}

