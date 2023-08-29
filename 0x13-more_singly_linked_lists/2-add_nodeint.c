#include "lists.h"

/**
*add_nodeint - adds a new node at the start of a l.list
*@head: points to the 1st node in the list
*@n: data to insert in the new node
*
*Return: points to the new node, or if it fails=Null
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
