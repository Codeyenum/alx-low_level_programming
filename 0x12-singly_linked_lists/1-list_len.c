#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t list
 * @h: pointer to head node
 * Return: number of elements
 */

size_t list_len(const list_t *h)

{

	int count = 0;

	if (h == NULL)
		return(0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);

}
