#include <stdio.h>
#include <unistd.h>

char *mx_strcpy(char *dst, const char *src) {
    int ind = 0;

    while(src[ind] != '\0') {
        dst[ind] = src[ind];
        idn++;
    }    

    dst[ind] = '\0';
    return dst;
}
