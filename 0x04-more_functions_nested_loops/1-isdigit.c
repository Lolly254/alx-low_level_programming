#include "main.h"

/**
 * _is digit - determines whether c is a digit
 *
 * @c: c the digit is stored
 * Return: 1 if c is a digit else return 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);

else
return (0);
}

