#include "lists.h"

/**
 * print_listint - for printint all linked list element list
 * @h: linked list of type listint_t to print
 *
 * Return: Nodes number
 */
size_t print_listint(const listint_t *h);
{
	size_t num = 0

		while (h)
		{
			printf("%d\n", h->n);
			num++;
			h = h->next;
		}
				return (num);
}
