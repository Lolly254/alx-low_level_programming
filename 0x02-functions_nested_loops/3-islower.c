#include "main.h"

/**
 * main - check if the alphabet is small
 * _islower - establish lowercase or uppercase
 * @c: where the character is determined
 * Return: 1 if the character is small and 0 if not
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

