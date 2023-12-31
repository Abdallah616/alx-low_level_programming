#include "shell.h"

void execute_command(const char *input, const char *program_name)
 {
    char **args = (char **)malloc(sizeof(char *) * MAX_INPUT_LENGTH), *token = strtok((char *)input, " ");
    int i = 0, status;
    pid_t pid;

	if (args == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
    while (token != NULL && i < MAX_INPUT_LENGTH - 1) {
        args[i] = sh_strdup(token);
	if (args[i] == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	i++;
        token = strtok(NULL, " ");
    }
    args[i] = NULL;
    if (i == 0)
    {
	    free(args);
        return;
    }
    if (sh_strcmp(args[0], "exit") == 0)
    {
	    free_args(args, i);
	    free(args);
	    exit(EXIT_SUCCESS);
    }
    if (sh_strcmp(args[0], "env") == 0)
    {
        print_environment();
        return;
    }
    if (sh_strcmp(args[0], "cd") == 0)
     {
        sh_cd(args[1], program_name);
        return;
    }
    pid = fork();
    if (pid == -1)
     {
        perror("fork");
	free_args(args, i);
	free(args);
        exit(EXIT_FAILURE);
    } else if (pid == 0)
    {
        execvp(args[0], args);
        perror(args[0]);
	free_args(args, i);
        free(args);
        exit(EXIT_FAILURE);
    }
    else
        waitpid(pid, &status, 0);
    free_args(args, i);
        free(args);
}
