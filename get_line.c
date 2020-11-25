#include "simple_shell.h"

/**
 *get_line- A fuction that reads the users inputs
 *Return: Users input(Line)
 */
char *get_line()
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	nread = getline(&line, &len, stdin);

	if (nread == -1)
	{
		printf("error, failed to read line\n");
		return (NULL);
	}
	if (line[nread - 1] == '\n')
	{
		line[nread - 1] = '\0';
	}
	return (line);
}

