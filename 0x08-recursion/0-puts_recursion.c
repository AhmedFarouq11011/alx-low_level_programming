#include <stdio.h>
#include "main.h"
#include <string.h>

void _puts_recursion(char *s);

int i = 0;
void _puts_recursion(char *s){
	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		i ++;
		_puts_recursion(s);
	}

}

