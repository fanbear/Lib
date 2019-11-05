#include "libmx.h"

void mx_str_reverse(char *s)
{
	if(!s) return;
	int count = mx_strlen(s);

	for(int i = 0; i < count / 2; i++){
		mx_swap_char(&s[i], &s[count - i - 1]);
	}

}
