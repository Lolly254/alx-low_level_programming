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
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}

