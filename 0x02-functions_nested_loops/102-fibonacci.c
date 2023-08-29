#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int sum;
	unsigned long int prev = 1;
	unsigned long int current = 2;

	printf("1, 2, ");

	for (i = 0; i < 48; i++)
	{
		if (i != 47)
		{
			sum = prev + current;
			printf("%lu, ", sum);
		}
		else
		{
			sum = prev + current;
			printf("%lu\n", sum);
		}
		prev = current;
		current  = sum;
	}
	return (0);
}
