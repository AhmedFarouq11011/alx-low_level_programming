#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *puts2  - prints the length of a string
 *@str : Pointer that will be updated
 *
 * Return: Always 0.
 */
void puts2(char *str);
void puts2(char *str)
{
	int i = 0;
	int v = strlen(str) - 1;

	while (i <= v)
	{
		if (i % 2 == 0 || i == 0)
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

}
