#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if (!str || !sub)
    return -2; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (!mx_strncmp(str, sub, mx_strlen(sub)))
            return i;
            str++;
    }
    return -1;  
}



// int main(){
//     const char *s1 = "Hello";
//     const char *s2 = "zr";
//     printf("%d\n", mx_get_substr_index(s1, s2));
// }
