#include "create_new_agents.h"

int mx_strlen(const char *s) {
    int lenght = 0;

    while(*s) {
        ++s;
        lenght++;
    }

    return lenght;
}

