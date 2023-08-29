#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/**
 * more_numbers- multiply 2 ints
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void);
void more_numbers(void)
{
	int k;
	int i = 0;

	while (i < 10)
	{
		for (k = 0; k < 15; k++)
		{
			if (k > 9)
			{
				putchar('0' + k / 10);
			}
				putchar('0' + k % 10);
		}
		putchar('\n');
		i++;
	}
}
