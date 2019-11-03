#include "libmx.h"

char *mx_itoa(int number){

	char *temp = (char *) malloc(sizeof(char));
	int i = 0;
	int j = 0;
	for( ;number != 0; i++){
		if(number % 10 < 10){
			temp[i] = number % 10 + 48;
			number /= 10;
		}else{
			temp[i] = number % 10 + 48;
			number /=10;
		}
	}
	i -= 1;
	for(; j < i; j++){
		char buf = temp[j];
		temp[j] = temp[i - j];
		temp[i - j] = buf;
	}
	temp[j + 1] = '\0';
	return temp;
}
