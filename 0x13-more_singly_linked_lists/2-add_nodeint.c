#include "lists.h"
/**
 *
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	int num;
	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);
	num = n;
	list->n = num;
	list->next = *head;
	*head = list;

	return(*head);
}
