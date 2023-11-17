#include <stdio.h>
#include "lists.h"

/**
*print_list - print a linked list
*@h: pointer to the head 
*
*Return size of the list 
*/

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i ++;
	}
	return (i);
}
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
			x = _strlen(h->str);
			printf("[%d] %s\n",x ,h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
