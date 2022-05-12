#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)

{

	int len = 0;
	int n;
	int m;

	while (str[len] != '\0')
	{
		len++;
	}

	n = len / 2;
	m = n + 1;

	if (len % 2 == 0)
	{
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
	else
	{
		while (str[m] != '\0')
		{
			_putchar(str[m]);
			m++;
		}
		_putchar('\n');
	}
}
