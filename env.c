#include "main.h"


int checkenv(char *arg, char *env[])
{
	int i;

	if(_strcmp("env", arg) == 0)
	{
		for(i = 0; env[i] != NULL; i++)
			printf("%s\n", env[i]);
		return (1);
	}
	return (0);
}

char **getpathlist()
{
	int i;
	char *paths, *tmp, **pathlist;
	const char colon = ':';

	paths = getenv("PATH");
	pathlist = malloc(strlen(paths) + 1);
	i = 0;
	tmp = strtok(paths, &colon);

	while(tmp != NULL)
	{
		pathlist[i] = tmp;
		tmp = strtok(NULL, &colon);
		i++;
	}
	pathlist[i] = NULL;

	return (pathlist);
}
