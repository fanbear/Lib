#include "libmx.h"

// char *mx_replace_substr(const char *str, const char *sub, const char *replace)
// {
// 	if(str == NULL || sub == NULL || replace == NULL) return NULL;
// 	// char* temp = (char *) malloc(sizeof(char) * (mx_strlen(str) - mx_strlen(sub) + mx_strlen(replace)) + 1);
// 	char *temp = mx_strdup(str);
// 	char *s = "asd";
// 	printf("%s\n", temp);
// 	if(mx_count_substr(temp,sub) == 0) return temp;
// 	else{
// 		int count = mx_get_substr_index(str,sub);
// 		char* l_arr = (char *) malloc(sizeof(char) * count);
// 		char* m_arr = (char *) malloc(sizeof(char) * mx_strlen(replace));
// 		char* r_arr = (char *) malloc(sizeof(char) * (mx_strlen(str) - mx_strlen(sub) - count));
// 		for(int i = 0; i < count; i++) l_arr[i] = str[i];
// 		for(int i = mx_strlen(l_arr) + mx_strlen(sub), j = 0; str[i] != '\0'; i++, j++) r_arr[j] = str[i];  
// 		r_arr[mx_strlen(r_arr)] = '\0';
// 		for(int i = 0; i < mx_strlen(replace); i++) m_arr[i] = replace[i];		
// 		temp = mx_strjoin(l_arr,m_arr);
// 		temp = mx_strjoin(temp,r_arr);
// 		mx_replace_substr(temp,sub,replace);
		
// 	}
// 	return s;

// }

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if(str == NULL || sub == NULL || replace == NULL) return NULL;
    char *res = mx_strdup(str);
    char *buff1 = mx_strnew(mx_strlen(str));
    char *buff2 = mx_strnew(mx_strlen(str));
    while(mx_strstr(res,sub) != NULL){
        int i = mx_get_substr_index(res,sub);
        mx_strncpy(buff1, res, i);
        for(int j = 0; j < i + mx_strlen(sub); j++){
            res++;
        }
        mx_strcpy(buff2,res);
        res = "";
        res = mx_strjoin(res, buff1);
        res = mx_strjoin(res, replace);
        res = mx_strjoin(res, buff2);
    }
    free(buff1);
    free(buff2);
    return res;
}
