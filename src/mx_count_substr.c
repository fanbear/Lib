#include "libmx.h"

int mx_count_substr(const char *str, const char *sub)
{
	if(!str || !sub) return -1;
	int len = mx_strlen(sub);
	int count = 0;
	if(!len) return 0;
	while(mx_strstr(str,sub) != NULL){
		if(mx_strncmp(str, sub, len) == 0){
			count++;
		}
		str += len;

	}
	return count;
}
