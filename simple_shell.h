#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;
char **env_path();
char *_getenv(const char *name);
int _strncmp(const char *s1, const char *s2, size_t n);
int _strlen(const char *s);
char **tokenize_env(char *var);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
char *check_stat(char *cmd);
int exec_cmd(char **arguments);
char *get_line();
#endif /* SIMPLE_SHELL_H */
