#include "libmx.h"
#include <fcntl.h>

char *mx_file_to_str(const char *file)
{
	int ret, fd;
	int i = 0;
	char buf[1024]; // буфер для чтения данных из файла
	char *str = (char *) malloc(sizeof(char) * 1024); //память для строки
	if((fd = open(file, O_RDONLY)) < 0) return NULL; //проверка на то что в аргументе передали имя файла
	while((ret = read(fd, buf, sizeof(buf) - 1)) > 0){ //чтения файла на размер буфера
		str[i] = buf[i]; // перезапись из буфера в строку
		i++;
	}
	close(fd);
	printf("%s\n", buf);
	return str;
}
