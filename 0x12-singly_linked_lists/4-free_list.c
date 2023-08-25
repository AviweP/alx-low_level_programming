#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
* free_list - frees a linked list
* @head: list_t list to be freed
*/
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head);
free(head->str);
head = temp;
}
free(head->str);
free(head);
}
