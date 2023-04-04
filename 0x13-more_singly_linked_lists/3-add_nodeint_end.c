#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked lists
 * @head: points to thhe first element
 * @n: for new element
 *
 * Return: New node pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *fresh;
	listint_t *temp = *head;

	fresh = malloc(sizeof(listint_t));
       if (!fresh)
       return (NULL);
fresh->n = n;
fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = fresh;

	return (fresh);
}
