#include "../inc/libmx.h"
int mx_strlen_s(const char *s, char c) {
    int count = 0;
    while(s[count] != c && s[count] !='\0') {
        count++;
    }
    return count;
}

// int mx_strlen_s(const char *s, char c) {
//     int word_length = 0;
//     char *copy_s = (char *)s;

//     while ((*copy_s != c) && (*copy_s != '\0')) {
//         word_length++;
//         copy_s++;
//     }
//     return word_length;
// }

// int main (){
//     char d[] = "hjkgjkhu voo j";
//     char s = ' ';
//     printf("%d\n", mx_strlen_s(d, s));
// }

