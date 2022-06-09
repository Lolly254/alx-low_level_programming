#include "lists.h"

/**
 * dlistint_len - prints the number of nodes in a list
 * @h: is the head pointer
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
