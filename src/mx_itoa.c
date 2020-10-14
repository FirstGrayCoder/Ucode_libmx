#include "libmx.h"

char *mx_itoa(int number) {
    int size = 0;
    int len = number;
    long int tmp = number;
    int i = 0;
    char *res = NULL;
      while (len != 0) {
        len /= 10;
        size++;
    }
    res = mx_strnew(size);
    if (number < 0) 
        tmp = mx_min_to_plus(number);
    number < 1 ? (i = size) : (i = size-1);
    for ( ; i >= 0; --i) {
        res[i] = (tmp % 10) + 48;
        tmp /= 10;
        if (number < 0) {
            res[0] = '-';
        }
    }
return res;
}


