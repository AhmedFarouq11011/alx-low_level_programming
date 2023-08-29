#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/**
 * print_line- print line
 *@n:Number of lines to be printd
 *
 * Return: Always 0 (Success)
 */
void print_line(int n);
void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
