#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t
 * @head: is the pointer to the first node
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int y = 0;
	int sum = 0;

	for (y = 0; temp != NULL; y++)
		temp = temp->next;
		sum += temp->n;

	return (sum);
}

