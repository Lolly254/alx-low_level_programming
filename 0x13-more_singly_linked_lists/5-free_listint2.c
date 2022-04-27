#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t
 * @head: is a pointer to the first node
 * The funtion sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (!temp)
		return;

	while (temp)
	{
		listint_t *tmp;

		tmp = temp;
		temp = temp->next;
		free(tmp);
	}
	*head = NULL;
}



