#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len)
{
	// if(big_len || little_len <= 0) return NULL;
	char *dst = (char *)big;
	char *src = (char *)little;
	unsigned i = big_len;
	unsigned j = little_len;
	i = i + j;
	return mx_strstr(dst,src);
}
