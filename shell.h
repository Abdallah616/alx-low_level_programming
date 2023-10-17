#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <libgen.h>
#include <errno.h>

extern char **environ;
#define MAX_INPUT_LENGTH 256

void sh_cd(const char *args, const char *program_name);
void execute_command(const char *input, const char *program_name);
void print_environment();
int _strcmp(char *s1, char *s2);

#endif
