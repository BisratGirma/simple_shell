#include "main.h"

char *setbuff(char *path, char *argv, char *buffer)
{
	int i, j;

	for(i = 0; path[i] != '\0'; i++)
		buffer[i] = path[i];

	buffer[i] = '/';

	
	for(j = 0; argv[i] != '\0'; j++)
	{
		buffer[i] = argv[j];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*	}*
 * commands - check for built ins.
 * @env: a string.
 *
 * Return: 1 on succuss.
 */
int commands(char *argv, char *pathlist[])
{
	int i;
	char *buffer;

	buffer = malloc(strlen(pathlist[i]) + sizeof(char) + strlen(argv) + 1);
	for(i = 0; pathlist[i] != NULL; i++)
	{
		setbuff(pathlist[i], argv, buffer);
		printf("%s\n", buffer); 
	
		if(access(buffer, X_OK) == 0)
		{
			free(buffer);
			return (i);
		}
	}
	free(buffer);
	return (-1);
}
