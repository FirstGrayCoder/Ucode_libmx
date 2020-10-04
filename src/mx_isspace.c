#include "../inc/libmx.h"

bool mx_isspace(char c) {
    if (c == '\t' || c == ' ' || c == '\n' || c == '\v' || c == '\f' || c == '\r') {
        return true;
    }
    else 
        return false;

}
//int main () {
//printf("%d", mx_isspace('\v'));
//}

