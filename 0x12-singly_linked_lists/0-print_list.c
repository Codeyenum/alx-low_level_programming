#include "lists.h"

/**
 * print_list - a function that prints all the lements of a list_t list.
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)

{
	int count = 0;

	if (h == NULL)
		return(0);

	while (h !== NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		
		h = h->next;
		count++;
	}

	return(count);
}

