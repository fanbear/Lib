#include "libmx.h"

char *mx_strdup(const char *str)
{
    int len = mx_strlen(str);
    char *buf = mx_strnew(len);
    mx_strcpy(buf,str);
    return buf;
}
