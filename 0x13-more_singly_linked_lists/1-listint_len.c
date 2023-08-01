#include "lists.h"
/**
 * listint_len - it that returns the number of elements in a linked list.
 * @h: head of the list
 * Return: count
 *
 */
size_t listint_len(const listint_t *h)
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
