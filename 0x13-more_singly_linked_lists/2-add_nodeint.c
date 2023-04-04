#include "lists.h"

/**
 * add_nodeint - adds new node at the beginningof a linked list
 * @head: first node pointer
 * @n: insert new node
 *
 * Return: NULL if it fails or point to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);
	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
