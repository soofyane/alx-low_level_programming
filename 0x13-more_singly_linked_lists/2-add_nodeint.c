#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: head of the linked list
 * @n: data
 * Return: address of the new element
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
	return (*head);
}
