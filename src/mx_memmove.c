#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {

    char *tmp = mx_strnew((const int) len);
    tmp = mx_memcpy((void *restrict) tmp, (const void *restrict) src, len);
    dst = mx_memcpy((void *restrict) dst, (const void *restrict) tmp, len);
    free(tmp);
return (char *) dst;
}

