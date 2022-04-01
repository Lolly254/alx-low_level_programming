#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * print the result of the multiplication
 * print error then return 1 if two arguments not received
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mul;

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
		printf("%d", mul);
		if (argc < 2)
		{
		printf("Error");
		return (1);
		}
	}
	return (0);
}
