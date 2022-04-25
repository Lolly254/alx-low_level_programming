#include "lists.h"

/**
 * print_listint - prints elements of a listint_t
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		k++;
		h = h->next;
	}
	return (k);
}

