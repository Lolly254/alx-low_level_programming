#include "lists.h"

/**
 * get_nodeint_at_index - is a function
 * that returns the nth node of a listint_t
 * @index: is the index of the node starting at 0
 * @head: is the pointer to the fist node
 *
 * Return: NULL if their is no node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	int c = 0;

	if (temp == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (c == index)
			return (temp->next);
		temp = temp->next;
		c++;
	}
}

