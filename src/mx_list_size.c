#include "libmx.h"

int mx_list_size(t_list *list)
{
	if(list == NULL) return 0;
	t_list *current = list;
	int count = 0;
	while(current != NULL){
		current = current->next;
		count++;
	}
	return count++;
}
