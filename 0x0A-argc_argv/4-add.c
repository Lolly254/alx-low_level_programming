#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints positive integers
 * print 0 if no number is passed followed by new line
 * print Error if one number contains symbols that are not digits,
 * followed by new file then return 1
 * @argc: number of arguments passed
 * @argv: array of elements passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc <= 0)
	{
		printf("0\n");
	}
	if (argc > 48 && argc < 57)
	{
		printf("Error\n");
		return (1);
	}
/* atoi converts strings to numbers*/
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (0);
}

