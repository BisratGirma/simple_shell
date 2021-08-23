#include "main.h"

/**
 * main - prints $ accepts input
 * @argc: number of input.
 * @argv: list of inputs.
 *
 * Return: 0 on exit.
 */
int main(int argc, char *av[])
{
	int count = 1;

	(void)argc;
	while(reader(count, av))
	{
		count++;
	}
	
	return (0);
}
