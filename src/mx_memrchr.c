#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n)
{
	char *src = (char *)s;
	unsigned count = 0;
	unsigned size = n;
	while(src[n--] != c) count++;
	char *temp = mx_strnew(mx_strlen(s));
	if(count == size || temp == NULL){
		free(temp);
		return NULL;
	}
	for(unsigned int i = size - count; i < size; i++) temp[i - count - 1] = src[i];
	return temp;
}
