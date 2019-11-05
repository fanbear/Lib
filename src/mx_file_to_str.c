#include "libmx.h"
#include <fcntl.h>

char *mx_file_to_str(const char *file)
{
	int desc = 0;
	int s_read = 0;
	int s_file = 0;

	char buf[128];
	char *temp = NULL;
	char *buf_str = NULL;

	desc = open(file, O_RDONLY);
	if(desc < 0) return 0;
	while((s_read = read(desc, buf, sizeof(buf) - 1)) > 0){
		buf[s_read] = '\0';
		s_file += s_read;
		buf_str = mx_strjoin(temp, buf);
		mx_strdel(&temp);
		temp = mx_strdup(buf_str);
		mx_strdel(&buf_str);
	}
	if(close(desc) < 0) return 0;
	
	return temp;
}
