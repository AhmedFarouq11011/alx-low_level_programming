#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <string.h>
/**
 *string_toupper  - compares 2 tsri
 *@s :the string that will hold both strings
 *
 * Return: Always 0.
 */
char *cap_string(char *s);
char *cap_string(char *s)
{
	char * seperators  = "{,!?\"(){};";

	while (s[i] != '\0')
	{
		if (islower(s[i]))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
