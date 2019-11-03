#include "libmx.h"

void mx_str_reverse(char *s)
{
	int i = 0;
	while(s[i] != '\0') {
		i++;
	}
	i -= 1;

	for(int j = 0; j < i / 2; j++){
		char d = s[j];
		s[j] = s[i - j];
		s[i - j] = d;
	}

}
