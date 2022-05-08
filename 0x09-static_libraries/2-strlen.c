#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: input
 * Return: int
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
