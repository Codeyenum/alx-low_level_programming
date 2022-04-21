#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps that value of two integers
 * @a: first input
 * @b: second input
 * Return: integers
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
