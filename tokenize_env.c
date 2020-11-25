#include "simple_shell.h"

/**
 *tokenize_env- A function that tokenize the PATH variable
 *@var: Pointer to the array of directories
 *Return:Pointer to the array
 */

char **tokenize_env(char *var)
{
	char *copy_var = var;
	int i = 0;
	char *p = strtok(copy_var, ":");
	static char *array[3];



	while (p != NULL)
	{
		array[i++] = p;
		p = strtok(NULL, ":");
	}

	return (array);
}
