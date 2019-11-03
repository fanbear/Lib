#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub)
{
    if(str == NULL || sub == NULL) return -2;
    char *temp = mx_strstr(str,sub);
    if (temp == NULL) return -1;
    int index = mx_strlen(str) - mx_strlen(temp);
    return index;
}
