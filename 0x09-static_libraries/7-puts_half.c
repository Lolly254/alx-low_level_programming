#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *  * @str: An input string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
int word = 0, i, n;

while (str[word] != '\0')
	word++;

if (word % 2 == 0)
n = word / 2;

else
n = (word + 1) / 2;

for (i = n; i < word; i++)
_putchar(str[i]);

_putchar('\n');
}
