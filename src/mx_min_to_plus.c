#include "../inc/libmx.h"

long int mx_min_to_plus(long int n) {
    if (n < 0)
        n *= -1;
    return n;
}
