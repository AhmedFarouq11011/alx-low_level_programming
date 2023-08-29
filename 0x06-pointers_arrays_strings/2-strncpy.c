#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strncpy  - prints the length of a string
 *@dest :the string that will hold both strings
 *@src :string that will be added to the first string
 *@n : number of chars to be concatenatedo
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n)
{
	/*int  length = strlen(dest) + strlen(src) - 1;*/
	strncpy(dest, src, n);
	return (dest);
}
