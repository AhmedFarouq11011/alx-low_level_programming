#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 *print_to_98  - Print 1 if n > 0 elif n < 0 return -1 else 0
 *@n : Description of parameter n
 *
 * Return: Always 0.
 */
void print_to_98(int n);
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
	}
	else
		printf("%d\n", n);
}
