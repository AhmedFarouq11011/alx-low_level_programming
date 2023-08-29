#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strncat  - prints the length of a string
 *@dest :the string that will hold both strings
 *@src :string that will be added to the first string
 *@n : number of chars to be concatenatedo
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n)
{
	/*int  length = strlen(dest) + strlen(src) - 1;*/
	strncat(dest, src, n);
	return (dest);
}
