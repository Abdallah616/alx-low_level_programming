#include "shell.h"
void free_args(char **args, int count)
{
	int j;

	for (j = 0; j < count; j++)
	{
		free(args[j]);
	}
}
