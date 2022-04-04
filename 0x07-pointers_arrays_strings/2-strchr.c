#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string of characters
 * @c: character to be located
 *
 * Return: pointer to the first occurance of c
 * else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i  = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return (NULL);
		}
	}
	return (0);
}

