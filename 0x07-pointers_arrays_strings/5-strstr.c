#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string from where subtring
 * have to be located
 * @needle: substring withing the haystack
 *
 * Return: pointer at the begining if string found
 * else return null
 */
char *_strstr(char *haystack, char *needle)
{
	int k;
	int j;

	for (k = 0; haystack[k] != '\0'; k++)
	{
		for (j = 0; needle[j]!= '\0'; j++)
		{
			if (haystack[k + j] != needle[j]);
			{
				break;
			}
			if (needle[j])
			{
			return (&haystack[k]);
			}
		}
	}
	return (NULL);
}
