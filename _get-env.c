#include "simple_shell.h"

/**
 *_getenv-A function gets the environment variable PATH
 *@name: Name of the PATH variable
 *Return: A pointer to the environment variable PATH on success
 *returns NULL on failure
 */

char *_getenv(const char *name)
{
	int index, len;

	len = _strlen(name);
	for (index = 0; environ[index]; index++)
	{
		if (_strncmp(name, environ[index], len) == 0)
			return (environ[index]);
	}

	return (NULL);
}

