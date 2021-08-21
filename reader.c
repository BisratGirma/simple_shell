#include "main.h"
/**
 * reader - reads an input form stdin
 * @argc = number of arguments.
 * @argv: list of arguments.
 *
 * Return: 1 on success, -1 on failute.
 */
int reader(char *line, char *argv[])
{
	int i = 0;
	size_t n;
	char *tmp;
	const char space = ' ';

	getline(&line, &n, stdin);
	
	while(line[i] != '\n')
		i++;

	line[i] = '\0';

	i = 0;
	tmp = strtok(line, &space);

	if(tmp == NULL)
	      return (1);

	while(tmp != NULL)
	{
		argv[i] = tmp;
		tmp = strtok(NULL, &space);
		i++;
	}

	executecom(argv);

	return (1);
}	
/**
 * executecom - executes commands.
 * @n: number of characters.
 * @value: acutall words.
 *
 * Return: 1 on success.
 */
void executecom(char *argv[])
{
	
	int ret;
	char temp[50] = "/bin/", *comb,
		*env_args[] = {(char *) "PATH=/bin", 0};

	comb = _strcat(temp, argv[0]);
	ret = fork();
	if (ret == 0)
	{
		if (execve(comb, argv, env_args) == -1)
		{
			printf("./shell: No such directory\n");
		}
	}
	else
	{
		wait(NULL);
		printf("\n$ ");
	}
}
