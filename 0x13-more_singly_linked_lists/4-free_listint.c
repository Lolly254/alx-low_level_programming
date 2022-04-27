#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: a pointer to the first node of a list
 * head is set to NULL
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	if (temp == NULL)
		return;

	free_listint(temp->next);
	free(temp);
}
