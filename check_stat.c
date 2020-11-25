#include "simple_shell.h"

/**
 *check_stat- A function that checks validity of a command
 *@cmd: command inserted
 *Return:If successful it returns the full PATH of the command
 *if it fails it returns NULL
 */

char *check_stat(char *cmd)
{
	static char **arr;
	char *buff;
	int i;
	struct stat st;

	arr = env_path();
	while (*arr++)
	{
		i = +1;
		buff = *arr;
		_strcat(buff, "/");
		_strcat(buff, cmd);
		if (stat(buff, &st) == 0)
			return (buff);
	}
	printf("not found");
	return (buff);
}
