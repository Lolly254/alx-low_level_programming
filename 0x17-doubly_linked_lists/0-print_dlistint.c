#include "lists.h"

/**
 * print_dlistint - prints the elements of a list
 * @h: the first pointer
 * Return: 0 if success else 1
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf(" %d\n ", h->n);
		h = h->next;
		count++;
	}
	return (count);
}


