#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr)
{
	char *buf = (char *) malloc(sizeof(char));
	int i = 0;
	for(;nbr != 0; i++){
		if(nbr % 16 < 10){
			buf[i] = nbr % 16 + 48;
			nbr /=16;
		}else {
			buf[i] = nbr % 16 + 87;
			nbr /= 16;
		}
	}
	i -= 1;
	for(int j = 0; j < i; j++){
		char d = buf[j];
		buf[j] = buf[i - j];
		buf[i - j] = d;
	}
	buf[i+1] = '\0';
	return buf;
}
