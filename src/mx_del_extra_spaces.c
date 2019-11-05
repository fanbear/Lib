#include "libmx.h"

bool is_space(char c);

char *mx_del_extra_spaces(const char *str)
{
	if(str == NULL) return NULL;
	char *temp = mx_strtrim(str);

	char *string = (char *) malloc(sizeof(char) * mx_strlen(temp));

	if(string == NULL){
		free(string);
		return NULL;
	}

	int j = 0;
	for(int i = 0 ; temp[i]; i++){
		if(temp[i] == ' '){
			if(!is_space(temp[i + 1])){
				string[j] = ' ';
				j++;
			}else if(is_space(temp[i + 1])) {}
		}else{
			string[j] = temp[i];
			j++;
		}

	}
	free(temp);
	string[j + 1] = '\0';
	return string;
}
