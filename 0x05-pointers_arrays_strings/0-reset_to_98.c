#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - a funtion that takes a pointer to an int as parameter and updates the value to 98
 * @n: input
 * Return: n
 */

void reset_to_98(int *n)
{
	int ret;

	*n = 98;
	ret = *n;

	return(ret);
}
