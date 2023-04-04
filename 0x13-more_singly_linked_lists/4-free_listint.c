#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: freed
 */
void free_listint(listint_t *head);
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		freee(head);
		head = temp;
	}
}
