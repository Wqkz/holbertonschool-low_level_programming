#include "lists.h"

/**
 * print_list - Prints 'All elements of a list_t list'
 * @h: Pointer Head of the list
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		++size;
		h = h->next;
	}
	return (size);
}
