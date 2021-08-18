#include "main.h"

/**
 * main - prints $ accepts input
 * @argc: number of input.
 * @argv: list of inputs.
 *
 * Return: 0 on exit.
 */
int main()
{
	int ret, count;
	char argv[1024];
	char *comb;

	
	printf("\n$ ");
	count = reader(argv);

	if (count == 0)
		printf("\n$ ");
	comb = strcat("/bin/", argv);
	ret = fork();
	if (ret == 0)
	{
		if (execve(comb , &argv, NULL) == -1)
		{
			printf("./shell: No such directory");
		}
	}
	else
	{
		wait(NULL);
		printf("\n$ ");
	}
	return (0);
}
