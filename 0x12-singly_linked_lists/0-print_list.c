#include "lists.h"

/**
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	if (h == NULL)
		printf("empty list");
	struct node *ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("[%d] %s\n",ptr->len, ptr->str);
		ptr = ptr->link;
	}
	return (count);
}
