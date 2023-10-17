#include "shell.h"



int main(int argc, char *argv[]) {
    char input[MAX_INPUT_LENGTH];

    (void)argc;
    while (1) {
        printf("simple_shell$ ");
        if (fgets(input, sizeof(input), stdin) == NULL) {

            printf("\n");
            break;
        }


        input[_strspn(input, "\n")] = '\0';

        if (sh_strcmp(input, "") == 0) {
            continue;
        }


        execute_command(input, argv[0]);
    }

    return 0;
}
