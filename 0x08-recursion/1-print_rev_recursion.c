#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_print_rev_recursion - prints the string followed by a new line
 *@s :the string to be printed
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s);

int i = 0;
void _print_rev_recursion(char *s)
{
	int x = strlen(s);

	if (s[x - i] == '\0' && x > 0)
	{

		_putchar(s[x - i - 1]);
		i += 2;
		_print_rev_recursion(s);
	}
	else if (x - i == 0 && x > 0)
	{
		_putchar(s[x - i]);
	}
	else if (x - i > 0)
	{
		_putchar(s[x - i]);
		i++;
		_print_rev_recursion(s);
	}
	else if (x == 0)
	{
		i++;
	}
}

