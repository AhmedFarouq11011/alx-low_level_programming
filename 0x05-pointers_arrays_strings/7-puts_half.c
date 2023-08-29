#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *puts_half  - prints the length of a string
 *@str : Pointer that will be updated
 *
 * Return: Always 0.
 */
void puts_half(char *str);
void puts_half(char *str)
{
	int i;
	int v = strlen(str);

	if ((v % 2) == 0)
	{
		i = v / 2;
	}
	else
	{
		i = (v - 1) / 2;
		i += 1;
	}
	while (i < v)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
