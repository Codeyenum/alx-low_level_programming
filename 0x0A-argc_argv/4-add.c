#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
/*
int main(int argc, char *argv[])

{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);

	return (0);
}*/

int main(int argc, char *argv[])
{
	int i, re;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > '0' && atoi(argv[i]) < '9')
		{
			res += atoi(argv[i]);
		}						 
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	return 0;
}
