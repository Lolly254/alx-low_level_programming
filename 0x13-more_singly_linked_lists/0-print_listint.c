#include "lists.h"

/**
 * print_listint - prints elements of a listint_t
 * @h: pointer to the first node of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;
	
	while(h)
	{
		printf("%d", h->n);
		j++;
		h = h->next;
	}
	return (j);
}
