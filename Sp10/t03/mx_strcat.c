#include "file_to_str.h"

char *mx_strcat(char *s1, const char *s2) {
    char *end = s1 + mx_strlen(s2);

    while (*s2 != '\0') {
        *end++ = *s2++;
    } 
    
    *end = '\0';
    return s1;
}

