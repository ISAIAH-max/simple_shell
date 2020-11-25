#include "simple_shell.h"

/**
 *exec_cmd- A function that execute commands
 *@arguments: Double pointer to argument given
 *Return: 1
 */

int exec_cmd(char **arguments)
{
	pid_t my_pid;
	char **argv = arguments;
	char *command = argv[0];
	int status = 0;

	if (command[0] != '/' && command[0] != '.')
	{
		command = check_stat(command);
	}
	else
	{
		command = argv[0];
	}


	my_pid = fork();
	if (my_pid == -1)
		return (-1);

	if (my_pid == 0)
	{
		status = 1;
		int erro = execve(command, argv, environ);

		if (erro == -1)
		{
			printf("No such file or directory\n");
		}

	}
	else
	{
		wait(&status);
	}
	return (1);
}
