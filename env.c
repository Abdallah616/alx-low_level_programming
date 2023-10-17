#include "shell.h"

void print_environment() {
    char **env = environ;
    while (*env) {
        printf("%s\n", *env);
        env++;
    }
}
