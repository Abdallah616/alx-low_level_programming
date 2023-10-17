#include "shell.h"
void sh_cd(const char *args, const char *program_name)
{

        if (args == NULL) {

            chdir(getenv("HOME"));
        } else {
            if (chdir(args) != 0) {
                fprintf(stderr, "%s: cd: %s: %s\n", program_name, args, strerror(errno));
            }
        }
}
