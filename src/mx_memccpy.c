#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char* str = (char *)src;
	char* temp = (char *)dst;
	for(size_t i = 0; n > i; i++){
		if(str[i] == c){
			return (void *) ((char)dst + i + 1);
		}
		else temp[i] = str[i];
	}
	return NULL;
}
