#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strcmp  - compares 2 tsri
 *@s1 :the string that will hold both strings
 *@s2 :string that will be added to the first string
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2);
int _strcmp(char *s1, char *s2)
{
	/*int  length = strlen(dest) + strlen(src) - 1;*/
	return (strcmp(s1, s2));
}
