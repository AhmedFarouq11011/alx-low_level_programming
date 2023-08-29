#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *print_array  - prints the length of a string
 *@a : array pointer
 *@n : the size of the array
 *
 * Return: Always 0.
 */
void print_array(int *a, int n);
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%i, ", a[i]);
		}
		else
		{
			printf("%i", a[i]);
		}
	}
	printf("\n");
}
