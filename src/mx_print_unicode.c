#include "../inc/libmx.h"

void mx_print_unicode(wchar_t c) {
    write(1, &c, 6);
}

// int main() {
//     wchar_t *c = L"U+0022 \n";
//     mx_print_unicode(*c);
// }
