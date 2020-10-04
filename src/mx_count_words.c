#include "../inc/libmx.h"

int mx_count_words(const char *str, char delimiter) {
    int result = 1;
    int flag = 0;

    while(*str) {
        if (*str == delimiter && flag) {
            result++;
            flag = 0;
        }
        else if (*str != delimiter)
            flag = 1;        
        str++;
    }
    if (*(str-1) == delimiter)
        result --;
    return result;
}

// int main(){
//     // printf("%d", 5); 
//     char s[] = " follow *  the * white rabbit iii";
//     char b = '*';
//     printf("%d\n", mx_count_words(s, b)); 
//     // printf("%c", b);
// }
