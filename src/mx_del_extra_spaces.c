#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *str1 = mx_strtrim(str);
    char *str2 = NULL;
    int count = 0;
    int j = 0;

    if (str) {         
        for (int i = 0; i < mx_strlen(str1); i++) {   
            if (mx_isspace(str1[i]))
                while(mx_isspace(str1[i]))
                    i++;
            count++;
        }
        str2 = mx_strnew(count);
        for (int i = 0; i < mx_strlen(str1); i++) {   
            if (mx_isspace(str1[i]))
                while(mx_isspace(str1[i + 1]))
                    i++;
            str2[j++] = str1[i];
        }
        free(str1);
    }
    return str2;
}

// int main() {
//     char *name = "\f  My name... is \r Meo \t\n" ;
//     // char *temp = mx_del_extra_spaces(" 1  2  3  4 5 ");
//     char *result = mx_del_extra_spaces(name);
//     printf("%s\n", result);
//     system("leaks -q a.out");
// }

