#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/**
 * print_numbers- multiply 2 ints
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void);
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
}
