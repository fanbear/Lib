#include "libmx.h"

double mx_pow(double n, unsigned int pow)
{
    
    double sp = n;
    if(pow < 0) return 1;
    if(pow == 0) return 1;
    while(pow > 1){
         n = n * sp; 
         pow--;
    }
    return n;
}
