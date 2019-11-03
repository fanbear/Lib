#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n)
{
	char *temp = (char *)s;
	for(int i = 0; n-- > 0; i++){
		if(temp[i] == c) return (char *)temp + i;
	}
	if(temp == s) return NULL;
	return temp;
}
