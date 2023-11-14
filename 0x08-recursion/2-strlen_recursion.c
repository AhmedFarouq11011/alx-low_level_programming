#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strlen_recursion  - prints the string followed by a new line
 *@s :the string to be used
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s);

int i = 0;

int _strlen_recursion(char *s)
{
	if (s[i] == '\0')
	{
		return (i);
	}
	else
	{
		i++;
		return (_strlen_recursion(s));
	}

}

