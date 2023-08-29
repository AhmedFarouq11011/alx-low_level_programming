#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *print_rev  - prints the length of a string
 *@s : Pointer that will be updated
 *
 * Return: Always 0.
 */
void print_rev(char *s);
void print_rev(char *s)
{
	int v = strlen(s) - 1;

	while (v >= 0)
	{
		printf("%c", s[v]);
		v--;
	}
	printf("\n");
}

