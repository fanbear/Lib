#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {

	int len = mx_strlen(s1);
	int i = 0;
	for(; s2[i] != '\0'; i++){
		s1[len] = s2[i];
		len++;
	}
	s1[len] = '\0';
	return s1;
}
