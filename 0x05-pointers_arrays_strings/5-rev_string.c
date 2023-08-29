#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *rev_string  - prints the length of a string
 *@s : Pointer that will be updated
 *
 * Return: Always 0.
 */
void rev_string(char *s);
void rev_string(char *s)
{
	int i = 0;
	int v = strlen(s) - 1;

	while (i <= v / 2)
	{
		char temp = s[i];

		s[i] = s[v - i];
		s[v - i] = temp;
		i++;
	}
}
