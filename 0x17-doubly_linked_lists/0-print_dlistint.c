#include "lists.h"

/**
 * print_dlistint - prints the elements of a list
 * @h: the first pointer
 * Return: 0 if success else 1
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


