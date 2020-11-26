#include "libmx.h"

int mx_get_len_number(unsigned long long int num) {
    int len = 0;
    for(unsigned long long int i = num; i != 0; i /= 10)
        len++;
    return len;
}
