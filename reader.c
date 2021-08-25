#include "main.h"
/**
 * reader - reads an input form stdin
 * @argc = number of arguments.
 * @argv: list of arguments.
 *
 * Return: 1 on success, -1 on failute.
 */
int reader(int count, char *native_av[],
	       	char *env[], char *pathlist[])
{
	int i, check;
	size_t n;
	char *argv[MAX_WORD]; 
	char *tmp, *line = NULL;
	const char space = ' ';

	printf("$ ");
	getline(&line, &n, stdin);

	if(checkenv(line, env))
		return (1);

	if(_strcmp(line, "exit") == 0)
	{
		free(pathlist);
		exit(3);
	}

	if(line == NULL)
	       return (1);

	i = 0;
	while(line[i] != '\n')
		i++;

	line[i] = '\0';

	i = 0;
	tmp = strtok(line, &space);

	while(tmp != NULL)
	{
		argv[i] = tmp;
		tmp = strtok(NULL, &space);
		i++;
	}
	argv[i] = NULL;

	check = commands(argv[0], pathlist);


	if(check == -1)
	{
		printf("%s: %d: %s: not found\n", native_av[0], count, argv[0]);
		return (1);
	}
	else
		executecom(argv, i, pathlist, pathlist[check]);

	return (1);
}
