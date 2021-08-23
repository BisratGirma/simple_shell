#include "main.h"

/**
 * _strcmp - compare two strings.
 * @s1: a first string
 * @s2: a second string
 *
 * Return: a positive value if s1 is greater, 0 if equal
 *	   and negative if s1 is lesser.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
