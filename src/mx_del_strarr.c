#include "libmx.h"

void mx_del_strarr(char ***str) {
	char **d_arr = *str;

	while(*d_arr){

		mx_strdel(d_arr);
		d_arr++;
	}
	free(*str);
	*str = NULL;
}
