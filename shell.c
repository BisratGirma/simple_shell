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
	char *line = NULL;
	char *argv[MAX_WORD];

	printf("\n$ ");
	while(1)
		reader(line, argv);

	
	return (0);
}
