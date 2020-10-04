#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {

    for (size_t i = 0; i < n; i++) {
        ((char *) dst)[i] = ((char *)src)[i]; 
    }
    return dst;
}

// int main() {
//     const void *restrict str1 = "Hello, dear Mneo";
//     size_t n = 7;
//     void *restrict str2 = mx_strnew(n);

//     void *restrict t = mx_memcpy(str2, str1, n);
//     printf("Standart -%s\n", memcpy(str2, str1, 6));
//     printf("Own -%s\n", t);
//     system("leaks -q a.out");
// }

