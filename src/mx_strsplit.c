#include "libmx.h"

char **mx_strsplit(const char *s, char c){

    if(s == NULL)
    {
        return NULL;
    }
    int count = mx_count_words(s, c);
    char **mas = (char **) malloc(sizeof(char *) * count + 1);
    char *temp = (char *)s;   
    int ccount = 0;
    int i = 0;
    for(;i < count; i++){
        ccount = 0;
        while(*s == c){
            s++;
            temp++;
        }
        while(*temp != c) {
            ccount++;
            temp++;
        }
        mas[i] = mx_strnew(ccount);
        mx_strncpy(mas[i], s, ccount);
        s += ccount;
    }
    mas[i + 1] = NULL;
    
    return mas;
    
}
