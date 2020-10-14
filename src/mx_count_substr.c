#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    if (NULL == str || NULL == sub)
        return -1;
    if (mx_strlen(str) == 0 || mx_strlen(sub) == 0)
        return 0;
    for ( ; *str; ) {
        if (mx_strncmp(str, sub, mx_strlen(sub)) == 0) {
            count++;
        }
        str++;
    }
    return count;
}


