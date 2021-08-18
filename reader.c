#include "main.h"

int reader(char *argv);

/**
 * reader - reads an input form stdin
 * @argc = number of arguments.
 * @argv: list of arguments.
 *
 * Return: 1 on success, -1 on failute.
 */
int reader(char *argv)
{
	char line[1024], *comb;
	int count, c;
/*	size_t len = 0;
	ssize_t read;
*/	
	while (1)
	{
		/*(read = getline(&argv, &len, stdin)) != -1);
*/		
		c = fgetc (stdin);
		line[count++] = (char) c;
		if (c == '\n')
			break;
	}
	if (count == 1)
	{
		argv = strtok(line, "\n");
	}
	comb = strcat("/bin/", argv);
	executecom(comb, &argv);	

	/* for (i = 0; i <= count; i++)
	{
		if (i == count)
		{
			argv[i] = '\0';
			break;
		}
		argv[i] = ptr[i];
	}
	*/
	return (count);
}	
/**
 * executecom - executes commands.
 * @n: number of characters.
 * @value: acutall words.
 *
 * Return: 1 on success.
 */
int executecom(char value[], char * argv[])
{
	int ret;


	 /*	for (i = 0; i < n; i++)
	{
		ch[0][i] = argv[i];
	}
	ch[1][0] = '\0';
*/
	ret = fork();
	if (ret == 0)
	{
		if (execve(value , argv, NULL) == -1)
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
