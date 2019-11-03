#include "libmx.h"

void mx_pop_front(t_list **head)
{
	if(!head && !(*head)) return;
	t_list *next_node = NULL;
	if((*head)->next == NULL){
		free(*head);
		*head = NULL;
	}
	if(*head == NULL) return;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;
}
