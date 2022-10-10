#include "stdio.h"

int mx_strcmp(const char *s1, const char *s2);
int mx_linear_search(char **arr, const char *s) {
    if(s == '\0')
        return -1;

    int i = 0;

    while(arr[i] != '\0') {
        if(mx_strcmp(arr[i], s) == 0)
            return i;

        i++;
    }

    return -1;
}
