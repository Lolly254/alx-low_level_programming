#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * print_list - function that prints all elements of a list
 * size_t the list to be printed
 * if the str is empty print [0]
 * @h: - pointer to elements of a list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
