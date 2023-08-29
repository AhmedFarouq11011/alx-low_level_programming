#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strcpy  - prints the length of a string
 *@dest: Pointer that will be copied 2
 *@src : Pointer that will be copied
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src);
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
