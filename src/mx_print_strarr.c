#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim)
{
	if(arr != NULL && delim != NULL){
	    int len = 0;
	    while (*arr[len] != '\0') len++;
	    for(int i = 0; i < len; i++){
	    	for(int j = 0; j < mx_strlen(arr[i]); j++){
	        	mx_printchar(arr[i][j]);
	    	}
	    	mx_printstr(delim);
	    	mx_printchar('\n');
	    }
	}
}
