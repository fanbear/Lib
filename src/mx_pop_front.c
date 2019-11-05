#include "libmx.h"

void mx_pop_front(t_list **head)
{
	if(!head && !(*head)) return;

	t_list *next_node = NULL;

	if((*head)->next == NULL){
		(*head)->data = NULL;
		free(*head);
		return;
	}
	
	next_node = (*head)->next;
	(*head)->data = NULL;
	free(*head);
	*head = next_node;
}
