#include "libmx.h"

char *mx_strndup(const char *s1, size_t n)
{
	char *temp = mx_strnew(n);
	if(!temp){
		return NULL;
	}
	return mx_strncpy(temp, s1, n);
}
