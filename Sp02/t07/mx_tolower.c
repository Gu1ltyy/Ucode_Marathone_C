#include <stdio.h>
#include <unistd.h>

int mx_tolower(int c) {
    if (c >= 65 && c <= 90) {
        c += 32;
    }
    return c;
}
