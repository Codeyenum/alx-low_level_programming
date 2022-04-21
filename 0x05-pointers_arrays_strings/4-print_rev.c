#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse followed by a new line
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int i, n;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (n = (len - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
