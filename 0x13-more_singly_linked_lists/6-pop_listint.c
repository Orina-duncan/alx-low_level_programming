#include "lists.h"

/**
*pop_listint - clears the head node of a l.list
*@head: poits to the 1st element in the l.list
*
*Return: 0 if the list is empty or data inside the deleted element
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
