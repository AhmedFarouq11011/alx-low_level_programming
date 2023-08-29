#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/**
 * print_diagonal- print line
 *@n:Number of lines to be printd
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n);
void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
