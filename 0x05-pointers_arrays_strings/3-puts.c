#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: string input
 * Return: void
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}

	_putchar('\n');
}
