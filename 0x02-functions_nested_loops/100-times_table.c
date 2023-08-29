#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * times_table  - Rerturn the abs of any number
 *
 * Return: Always 0.
 */
	void print_times_table(int n);
	void print_times_table(int n)
	{
		int j, k, sum;

		if (n < 0 || n > 15)
		{
			_putchar('\n');
		}
		else if (n > 0 && n <= 15)
		{		
			for (j = 0; j <= n; j++)
			{
				for(k = 0; k <= n; k++)
				{
					sum = j * k;
					if (k == 0)
					{
						printf("%d,", sum);
					}
					else if ((k * j) < 10 && k != n)
					{
						printf("   %d,", sum);
					}	
					else if((k * j) < 10 && k == n)
					{
						printf("   %d", sum);
					}
					else if((k * j) >= 10 && (k * j) < 100 && k != n)
					{
						printf("  %d,", sum);
					}
					else if ((k * j) >= 10 && (k * j) < 100 && j == n)
					{
						printf("  %d", sum);
					}
					else if ((k * j) >= 100 && k == n)
					{
						printf(" %d", sum);
					}
					else if((k * j) >= 100 && j != n)
					{
						printf(" %d,", sum);
					}

				}
				printf("\n");
			}

		}
	}
