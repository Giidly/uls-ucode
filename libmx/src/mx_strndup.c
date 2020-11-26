#include "libmx.h"
char *mx_strndup(const char *s1, size_t n) {
    char *duplic = NULL;
    size_t length = mx_strlen(s1);
    if(n < length)
        length = n;
    duplic = mx_strnew(length);
    mx_strncpy(duplic, s1, length);
    return duplic;
}
