#include "../inc/libmx.h"

t_list *mx_create_node(void *data) {
    t_list *new_struct = NULL;

    new_struct = (t_list *) malloc (sizeof(t_list));
    new_struct -> data  = data;
    new_struct -> next  = NULL;
    return new_struct;
}

