#include "libmx.h"

int mx_count_words(const char *str, char c)
{
	if (str == NULL) return -1;
	int i = 0;
	int w = 0;
	int res = 0;
	while(str[i] == c) i++;
	for(; str[i]; i++){
		if(str[i] != c){

			if(w == 0){
				w = 1;
				res++;
			} 
		} else if(w == 1){
			w = 0;
		}
	}
	return res;
}
