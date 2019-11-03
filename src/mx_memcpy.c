#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *str = (char *)src;
	char *temp = (char *)dst;
	int i = 0;
	while(n-- > 0){
		temp[i] = str[i];
		i++;
	}
	return temp;
}
