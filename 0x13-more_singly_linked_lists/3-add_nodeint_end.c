#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: head of the linked list
 * @n: data
 * Return: the address of the new node/element
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list;

	listint_t *ptr;

	(void)ptr;

	ptr = *head;
	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);
	list->n = n;
	list->next = NULL;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = list;
	return (list);
}
