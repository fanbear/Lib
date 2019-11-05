#include "libmx.h"

void mx_push_back(t_list **list, void *data)
{
	if(!list && !(*list)) return;

	t_list *current = *list;
	
	while(current->next != NULL)
	{
		current = current->next;
	}
	current->next = mx_create_node(data);
	
}
