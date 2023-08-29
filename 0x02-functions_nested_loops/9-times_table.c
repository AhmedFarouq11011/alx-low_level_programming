#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * times_table  - Rerturn the abs of any number
 *
 * Return: Always 0.
 */
	void times_table(void);
	void times_table(void)
	{
		int i, j, num;

		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				num  = i * j;

				if (j == 0)
				{
					_putchar('0' + 0);
				}
				else if (num < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + num);
				}
				else if (num >= 10)
				{
					_putchar(' ');
					_putchar('0' + num / 10);
					_putchar('0' + num % 10);
				}

				if (j != 9)
				{
					_putchar(',');
				}
				else if (j == 9)
				{
					_putchar('\n');
				}
			}
		}
	}
