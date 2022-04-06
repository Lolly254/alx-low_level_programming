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
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	/* we use atoi to return integers*/
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	printf("%d\n", mul);
	return (0);
}
