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
	char *argv = malloc(sizeof(char));


	printf("\n$ ");
	reader(argv);

	
	free(argv);
	return (0);
}
