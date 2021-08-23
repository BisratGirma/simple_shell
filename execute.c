#include "main.h"
/**
 * executecom - executes commands.
 * @n: number of characters.
 * @value: acutall words.
 *
 * Return: 1 on success.
 */
void executecom(char *argv[], int count
		, char *native_av[], int free)
{
	pid_t ret, i;
	char dir[50] = "/bin/", *comb,
	     *env_args[] = {(char *) "PATH=/bin", 0};

/*	const char colon = ':';
	char *temp, *envlist,
	     *envp[MAX_WORD];
*/
	comb = _strcat(dir, argv[0]);
/*	envlist = getenv("PATH");
	printf("%s\n", argv[0]);
	i = 0;
	temp = strtok(envlist, &colon);
	while(temp != NULL)
	{
		envp[i] = temp;
		temp = strtok(NULL, &colon);
		i++;
	}
	printf("%s", envp[i]);
*/	ret = fork();
	if (ret == 0)
	{
		if (execve(comb, argv, env_args) == -1)
		{
			printf("%s: %d: %s: not found\n", native_av[0], count, argv[0]);
			exit(3);
		}
	}
	else
	{
		waitpid(ret, NULL, 0);
		for(i = 0; i < free; i++)
			argv[i] = NULL;
	}
}
