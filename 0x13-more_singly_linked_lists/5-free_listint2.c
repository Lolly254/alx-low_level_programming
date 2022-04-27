#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t
 * @head: is a pointer to the first node
 * The funtion sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}



