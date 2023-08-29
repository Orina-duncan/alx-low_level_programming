#include "lists.h"

/**
*print_listint - displays all the elements of a l.list
*@h: l.list of type listint_t to display
*
*Return: the no. of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
