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
	int count = 1;
	char **pathlist;
	
	pathlist = getpathlist();
	(void)argc;
	while(reader(count, av, env, pathlist))
	{
		count++;
	}
	
	return (0);
}
