#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 * followed by a new line
 * @argc: number of arguments passed in the command line
 * @argv: the strings entered in the command line
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s", argv[1]);
	}
	printf("\n");
	return (0);
}
