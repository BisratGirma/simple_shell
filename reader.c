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
	int /*c, i, */count;
	char *line = argv;
	size_t len = 0;
	ssize_t read; 

	
	while ((read = getline(&line, &len, stdin)) != 1)
		count++;

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
