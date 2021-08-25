#include "main.h"
/**
 * executecom - executes commands.
 * @n: number of characters.
 * @value: acutall words.
 *
 * Return: 1 on success.
 */
void executecom(char *argv[], int free, 
		char *path[], char *dir)
{
	pid_t ret, i;
	char *comb, temp[50];


	for(i = 0; dir != NULL; i++)
		temp[i] = dir[i];

	printf("%s\n", dir);
	comb = _strcat(temp, argv[0]);
	printf("%s\n", comb);
	ret = fork();
	if (ret == 0)
	{
		if (execve(comb, argv, path) == -1)
		{
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
