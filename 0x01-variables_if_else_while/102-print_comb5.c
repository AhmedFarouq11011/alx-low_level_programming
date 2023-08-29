#include<stdio.h>
/**
 * main - For loop nested inside another For loop
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i, j, k, l, first_two, second_two;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					first_two = 10 * i + j;
					second_two = 10 * k + l;
					if (second_two > first_two)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + k);
						putchar('0' + l);
					}
					else
					{
						continue;
					}

					if ((i == 9) && (j == 8) && (k == 9) && (l == 9))
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
