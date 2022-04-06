#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 * including the first argument
 * one argument to be printed on a different line
 * followed by a new line
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
