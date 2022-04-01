#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed
 * followed by a new line
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}


