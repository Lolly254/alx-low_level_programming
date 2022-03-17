#include "main.h"

/**
 * _isupper -checks if the letter is uppercase
 *
 * @c: ascii integer value of the letter to be checked
 * Return: 1 if the letter is uppercase and 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

