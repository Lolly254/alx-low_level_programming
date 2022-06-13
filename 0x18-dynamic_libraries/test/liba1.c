#include "main.h"

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
char *_strcat(char *dest, char *src)

{
	return (dest);
}
int _islower(int c) { return (1); }
/**
 * _isalpha - check the code
 *
 * Return: Always 1.
 */
int _isalpha(int c) { return (1); }
/**
 * __abs - check the code
 *
 * Return: Always 1.
 */
int _abs(int n) { return (1); }
/**
 * _isupper - check the code
 *
 * Return: Always 1.
 */
