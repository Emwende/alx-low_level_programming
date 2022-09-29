#include "lists.h"
#include <stdlib.h>

/**
*add_dnodeint - add a new node at the beginning of the linked list
*@head: double pointer to the beginning of the linked list
*@n: value to add to the new node
*Return: pointer to the new node, or NULL on failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
