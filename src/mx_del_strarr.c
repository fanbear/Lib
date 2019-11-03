#include "libmx.h"

void mx_del_strarr(char ***str) {
	int i = 0;
	if(str[i] != NULL){
		free(str);
		while(str[i]){
			str = NULL;
		}
	}
}
