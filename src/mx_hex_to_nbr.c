#include "libmx.h"

bool mx_isalpha(int c)
{
    if( (c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
        return true;
    }else{
        return false;
    }
}
bool mx_isdigit(int c) {
    if(c > 47 && c < 58) {
        return true;
    }else{
        return false;
    }
}
bool mx_islower(int c)
{
    if( c >= 97 && c <= 122){
        return true;
    }else {
        return false;
    }
}
bool mx_isupper(int c)
{
    if( c >= 65 && c <= 90){
        return true;
    }else {
        return false;
    }
}

unsigned long mx_hex_to_nbr(const char *hex){
    
    unsigned long temp = 0;
    int i = 0;
    while (hex[i] != '\0'){
        if (mx_isalpha(hex[i])){
            if (mx_isupper(hex[i])) temp = temp * 16 + (hex[i] - 55);
            if (mx_islower(hex[i])) temp = temp * 16 + (hex[i] - 87);
            i++;
        }else if (mx_isdigit(hex[i])){
            temp = temp * 16 + (hex[i] - 48);
            i++;
        }else{
           return temp;
        }
    }
    return temp;
}
