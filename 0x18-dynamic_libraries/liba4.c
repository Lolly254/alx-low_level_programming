#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j;

for (j = 0; j < n; j++)
{
dest[j] = src[j];
}
return (dest);

}
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
char *_strstr(char *haystack, char *needle)
{
return (0);
}
