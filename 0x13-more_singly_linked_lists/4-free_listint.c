#include "lists.h"

/**
 * *ifree_listint2 - frees a listint_t
 * @head: a pointer to the first node of a list
 * head is set to NULL
 */
void free_listint2(listint_t *head)
{
	listint_t *temp;
	temp = head;

	if (temp == NULL)
		return;

	free_listint2(temp->next);
	
	free(temp);
}
