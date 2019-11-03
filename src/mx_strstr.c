#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle)
{
    int i, j, n = mx_strlen(needle);

    for (i = 0, j = 0; haystack[i]; i++, j++)
    {
        if (haystack[i] != needle[j]) j = -1;
        if (j == n-1) return (char *)haystack + i - n+1;
    }   return NULL;
}
