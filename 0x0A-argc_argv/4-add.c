#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num-checker - checks if a given character is a number or not
 * @a: char to be checked 
 * Return: 1 if it is a number, else 0
 */
int num_checker(char *a)
{
	int i = 0;
	int num = 0;
	int len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' && a[i] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (a[i] - '0');
		}
		i++;
	}
	return (num);
}
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: array of arguments strings
 * Retrun: result of addition or 1
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;
	for (i = 1; i < argc; i++)
	{
		 num = num_checker(argv[i]);
		 if (num == -1)
		 {
		 	printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", num);
	return (0);
}

