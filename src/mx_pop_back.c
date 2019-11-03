#include "libmx.h"

void mx_pop_back(t_list **head)
{
	printf("len -%i\n", mx_list_size(*head));
	if(!head && !(*head)) return;
	t_list *current = *head;
	if(current->next == NULL){
		free((*head));
		*head = NULL;
		return;
	}
	while(current->next->next){
		current = current->next;
	}
	free(current->next);
	current->next = NULL;	
}
