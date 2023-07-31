#include "lists.h"
/**
 * list_len - function that returns the number of elements in a LL
 * @h: head of a node
 * Return: count of a list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
