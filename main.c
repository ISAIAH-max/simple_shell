#include "simple_shell.h"

void prompt(void);

/**
 *main- A function that allow execution of commands
 *Return: 1
 */

int main(void)
{
	int stat = 1, i;
	char **args;
	char *string;
	char *argv[1024];
	char *token;

	while (stat)
	{
		prompt();
		string = get_line();
		token = strtok(string, " ");
		i = 0;
		while (token != NULL)
		{
			argv[i] = token;
			token = strtok(NULL, " ");
			i++;
		}
		argv[i] = NULL;
		args = argv;
		stat = exec_cmd(args);
	}
	return (0);
}

/**
*prompt-prints charcter "$ "
*/

void prompt(void)
{
	printf("$");
}
