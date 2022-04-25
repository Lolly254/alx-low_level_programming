#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list listint_t
 * @head: is the pointer to the first node of the list
 * @n: is the data of the new node
 *
 * Return: NULL if there is no data otherwise address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}



