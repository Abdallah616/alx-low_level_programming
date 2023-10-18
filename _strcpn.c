#include "shell.h"
size_t my_strcspn(const char *str, const char *reject) {
    const char *s = str;
    size_t count = 0;

    while (*s) {
        const char *r = reject;
        int found = 0;

        while (*r) {
            if (*s == *r) {
                found = 1;
                break;
            }
            r++;
        }

        if (found) {
            break;
        }

        s++;
        count++;
    }

    return count;
}
