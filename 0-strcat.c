#include "main.h"

/**
 * _strcat - merges two strings.
 * @dest: the first string.
 * @src: the second string.
 *
 * Return: a merged string.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;
	int destlen = 0;

	while (dest[destlen] != '\0')
		destlen++;
	while (src[len] != '\0')
		len++;
	len = destlen + len + 1;

	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}
