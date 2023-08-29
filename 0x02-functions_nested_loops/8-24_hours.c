#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * jack_bauer - Print 1 if n > 0 elif n < 0 return -1 else 0
 *
 * Return: Always 0.
 */
void jack_bauer(void);
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 2 && j > 3)
			{
				break;
			}
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
