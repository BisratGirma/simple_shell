#include "main.h"

/**
 * main - prints $ accepts input
 * @argc: number of input.
 * @argv: list of inputs.
 *
 * Return: 0 on exit.
 */
int main(int argc, char *av[], char *env[])
{
	int i = 0, count = 1;

	while(env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	(void)argc;
	while(reader(count, av))
	{
		count++;
	}
	
	return (0);
}
