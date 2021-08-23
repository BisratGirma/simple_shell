#include "main.h"
/**
 * reader - reads an input form stdin
 * @argc = number of arguments.
 * @argv: list of arguments.
 *
 * Return: 1 on success, -1 on failute.
 */
int reader(int count, char *native_av[])
{
	int i = 0;
	size_t n;
	char *argv[MAX_WORD]; 
	char *tmp, *line = NULL;
	const char space = ' ';

	printf("$ ");
	getline(&line, &n, stdin);

	if(_strcmp(line, "exit") == 0)
	       exit(3);

	if(line == NULL)
	       return (1);

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
	executecom(argv, count, native_av, i);

	return (1);
}
