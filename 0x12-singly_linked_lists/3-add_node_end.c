#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - a function that adds a new node 
 * at the end of list_t list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
	int i, count = 0;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);

}
