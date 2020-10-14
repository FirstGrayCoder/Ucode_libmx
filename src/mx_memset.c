#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *f = (unsigned char*) b;
    
    for (size_t i = 0; i < len; i++) {
       f[i] = (unsigned char )c;
        }
    return f;
}

// int main() {
//     char str1[] = "Hello, dear Mneo";
//     char str2[] = "Hello, dear Mneo";
//     // mx_memset(&str, 55, 6);
//     printf("%s\n", memset(str1, 65, 6));
//     printf("%s\n", mx_memset(&str2, 65, 6));
// }

