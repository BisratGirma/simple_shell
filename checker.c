#include "main.h"

char *setbuff(char *path, char *argv, int sum)
{
	int i, j;
	char buffer[sum];

	for(i = 0; path[i] != '\0'; i++)
		buffer[i] = path[i];

	buffer[i] = '/';

	for(j = 0; argv[i] != '\0'; j++)
	{
		buffer[i] = argv[j];
		i++;
	}
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
	int i, sum;
	char *buffer;

	
	for(i = 0; pathlist[i] != NULL; i++)
	{
		sum = sizeof(pathlist[i]) + sizeof(argv);
		buffer = setbuff(pathlist[i], argv, sum);
		printf("%s\n", buffer); 

		if(access(buffer, X_OK) == 0)
		{
			free(buffer);
			return (i);
		}
	memset(buffer, 0, sizeof(buffer));
	}
	free(buffer);
	return (-1);
}
