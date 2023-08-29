#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/**
 * print_square- print line
 *@size:Number of lines to be printd
 *
 * Return: Always 0 (Success)
 */
void print_square(int size);
void print_square(int size)
{
	int i, k;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
