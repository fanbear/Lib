#include "libmx.h"

// char **mx_strsplit(const char *s, char c){

//     if(s == NULL)
//     {
//         return NULL;
//     }
//     int count = mx_count_words(s, c);
//     char **mas = (char **) malloc(sizeof(char *) * count + 1);
//     char *temp = (char *)s;   
//     int ccount = 0;
//     int i = 0;
//     for(;i < count; i++){
//         ccount = 0;
//         while(*s == c){
//             s++;
//             temp++;
//         }
//         while(*temp != c) {
//             ccount++;
//             temp++;
//         }
//         mas[i] = mx_strnew(ccount);
//         mx_strncpy(mas[i], s, ccount);
//         s += ccount;
//     }
//     mas[i + 1] = NULL;
    
//     return mas;
    
// }
char **mx_strsplit(const char *s, char c) {
    if (!s) {
        return NULL;
    }
    int size_arr = mx_count_words(s, c);
    int counter = 0;
    char **result = malloc(sizeof(char *) * (size_arr + 1));
    int len = mx_strlen(s);
    int index = 0;
    if (size_arr == 1) {
        result[0] = mx_strdup(s); //fdsa.fdsafdsa
        result[1] = NULL;
        return result;
    }
    for (int i = 0; i < len; i++) {
        index = mx_get_char_index(s, c);
        index = index == -1 ? mx_strlen(s) : index;
        if (index) {
            result[counter] = mx_strndup(s, index);
            s += mx_strlen(result[counter]) - 1;
            i += mx_strlen(result[counter]) - 1;
            counter++;
        }
        s++;
    } 
    result[size_arr] = NULL;
    return result;
}
