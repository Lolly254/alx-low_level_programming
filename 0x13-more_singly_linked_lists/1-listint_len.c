#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: is the pointer to the first node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t no;

	for (no = 0; h; no++)
	{
		h = h->next;
	}
	return (no);
}
