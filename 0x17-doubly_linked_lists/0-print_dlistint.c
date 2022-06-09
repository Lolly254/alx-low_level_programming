#include "lists.h"

/**
 * print_slistint - prints the elements of a list
 * h: the first pointer
 * Returns: the number of lists
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		printf(" \n%d ", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}


