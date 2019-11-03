#include "libmx.h"

char *mx_strndup(const char *s1, size_t n)
{
	if(s1 == NULL) return NULL;
	char *temp = (char *) malloc(sizeof(char) * n);
	unsigned int len = mx_strlen(s1);
	if (len < n) n = len;
	for(unsigned int i = 0; i < n; i++){
		temp[i] = s1[i];
	}
	return temp;
}
