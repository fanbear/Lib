#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {

    char *src = (char *)s;
    src += n;
    while (n-- > 0) {
        if (*src == c) return (void *) (src);
        src--;
    }
    return NULL;
}
