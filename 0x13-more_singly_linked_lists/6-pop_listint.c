#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * and returns the head nodes data(n)
 * we are using a struct defined in the lists file
 * @head: is the pointer to the fist node in the list
 *
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (temp == NULL)
		return (0);
	int k = (*head)->n;

	*head = (*head)->next;
	free(temp);

	return (k);
}

