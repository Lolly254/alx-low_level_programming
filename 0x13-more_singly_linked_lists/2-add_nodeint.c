#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a listint_t
 * @head:  pointer to the first node of the list
 * @n: data of the node to be added at the beginning of the list
 *
 * Return: NULL if it fails otherwise address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
