#include "main.h"

/**
 * wildcmp - compare two strings with "wildcard expansion" capabilities
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if strings can be considered identical, else 0
 */

int wildcmp(char *s1, char *s2)

{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '\0')
		return (0);
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	if (*s1 == '\0')
	{
		if (*s2 != '*')
			return (0);
		else
			return (wildcmp(s1, s2 + 1));
	}
	return (0);
}
