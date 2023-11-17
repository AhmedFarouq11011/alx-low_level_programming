#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
*print_list - print a linked list
*@h: pointer to the head 
*
*Return size of the list 
*/


size_t print_list(const list_t *h)
{
	size_t i = 0;	
	int x = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			x = strlen(h->str);
			printf("[%d] %s\n",x ,h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}

