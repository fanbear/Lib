#include "libmx.h"

int mx_read_line(char **lineptr, int buf_size, int delim, const int fd) {
   int res = 0;
   char *buff = mx_strnew(buf_size);
   int bytes;
   while ((bytes = read(fd, buff, buf_size)) >= buf_size) {
       if (mx_get_char_index(buff,delim) >= 0) {
           return res;
       }
       buff[mx_strlen(buff)] = '\0';
       *lineptr = mx_strjoin(*lineptr,buff);
       res+=bytes;
   }
   if(bytes < 0 ) return -1;
   if(bytes < buf_size && bytes != 0) return res;
   free(buff);
   return 0;
}
