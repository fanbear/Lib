#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *))
{
    if(lst == NULL) return NULL;
	int size = mx_list_size(lst);
    if(size == 1) return lst;
	for(t_list *current = lst; current != NULL; current = current->next){
        for(t_list *current2 = lst; current2->next; current2 = current2->next){
            if(cmp((void *)current2->data, (void *)current2->next->data) == true){
                char *buf= current2->data;
                current2->data = current2->next->data;
                current2->next->data = buf;
                
             }
         }
     }
	return lst;
}
