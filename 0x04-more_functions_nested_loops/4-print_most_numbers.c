#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/**
 * print_most_numbers- multiply 2 ints
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void);
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (!((i == 2) || (i == 4)))
		{
			putchar('0' + i);
			i++;
		}
		else
		{
			i++;
		}
	}
	putchar('\n');
}
