#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strcat  - prints the length of a string
 *@dest :the string that will hold both strings
 *@src :string that will be added to the first string
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src);
char *_strcat(char *dest, char *src)
{
	/*int  length = strlen(dest) + strlen(src) - 1;*/
	strcat(dest, src);
	return (dest);
}
