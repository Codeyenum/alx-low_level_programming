#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)

{
	int len = 0;
	int m = n - 1;

	while (len < m)
	{
		printf("%d, ", a[len]);
		len++;
	}

	while (len < n)
	{
		printf("%d\n", a[len]);
		len++;
	}
}
