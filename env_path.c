#include "simple_shell.h"
/**
 *env_path- A function that stores the env variable PATH
 *on the if heap using malloc
 *Return: New environment
 */

char **env_path(void)
{
	int index;
	char *env = "PATH";
	size_t  size;
	char unused __attribute__((unused));
	char **new_environ;
	char *copy_env __attribute__((__unused__)) = _getenv(env);

	unused = *copy_env;
	char **path_arr = tokenize_env(copy_env);

	for (size = 0; path_arr[size]; size++)
	{
	}

	new_environ = malloc(sizeof(char *) * (size + 1));
	if (!new_environ)
		return (NULL);

	for (index = 0; path_arr[index]; index++)
	{
		new_environ[index] = malloc(_strlen(path_arr[index]) + 1);

		if (!new_environ[index])
		{
			for (index--; index >= 0; index--)
				free(new_environ[index]);
			free(new_environ);
			return (NULL);
		}
		_strcpy(new_environ[index], path_arr[index]);
	}
	new_environ[index] = NULL;
	return (new_environ);
}
