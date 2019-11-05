#include "libmx.h"

bool is_space(char c){

	if(c == 32) return 1;
	if(c == '\t') return 1;
	if(c == '\n') return 1;
	if(c == '\v') return 1;
	if(c == '\f') return 1;
	if(c == '\r') return 1;
	return 0;
}

char *mx_strtrim(const char *str)
{
	if(str == NULL) return NULL;

	int i = 0;
	int j = mx_strlen(str);
	while(is_space(str[i])) i++;
	while(is_space(str[j - 1])) j--;
	char *temp = (char *) malloc (sizeof(char) * (j - i));
	int l = i;
	for(int i = 0; i < j - l; i++){
		temp[i] = str[i + l];
	}
	if(temp == NULL){
		free(temp);
	}
	temp[j - l] = '\0';
	return temp;
}
