#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char* str = (char *)src;
	char* temp = (char *)dst;
	for(int i = 0; n-- > 0; i++){
		if(str[i] == c){
			for(int j = 0; j != 1; j++){
				temp[i] = str[i];
			}
			return temp;
		}
		else temp[i] = str[i];
	}
	return temp;
}
