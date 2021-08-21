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
	const char *space = " ";

	getline(&line, &n, stdin);
	
	while(line[i] != '\n')
		i++;

	line[i] = '\0';

	printf("%s", line);

	i = 0;
	argv[i] = strtok(line, ' ');

	if(argv[i] == NULL)
	      return (1);

	while(argv[i] != '\0')
	{
		i++;
		argv[i] = strtok(line, space);
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
	char *com = "/bin/" + argv[0];
	
	ret = fork();
	if (ret == 0)
	{
		if (execve(com , argv, NULL) == -1)
		{
			printf("./shell: No such directory");
		}
	}
	else
	{
		wait(NULL);
		printf("\n$ ");
	}

	return (1);
}
