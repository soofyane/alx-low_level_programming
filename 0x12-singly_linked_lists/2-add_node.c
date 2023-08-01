#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: the first list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *list;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);
	dup = strdup(str);
	list->str = dup;
	list->len = strlen(dup);
	list->next = NULL;

	list->next = *head;
	*head = list;
	return (*head);
}
