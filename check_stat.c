#include "simple_shell.h"

/**
 *check_stat- A function that checks validity of a command
 *@cmd: command inserted
 *Return:If successful it returns the full PATH of command if found
 *else returns the passed command
 */

char *check_stat(char *cmd)
{
	static char **arr;
	char *buff;
	struct stat st;

	arr = env_path();
	while (*arr++)
	{
		buff = *arr;
		_strcat(buff, "/");
		_strcat(buff, cmd);
		if (stat(buff, &st) == 0)
			return (buff);
	}
	printf("not found");
	return (buff);
}
