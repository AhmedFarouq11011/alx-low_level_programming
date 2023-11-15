#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_sqrt_recursion  - prints the sqrt of a number
 *@n :the int to be used
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n);

int i = 1;
int x = 0;

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (x);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		x++;
		if (x == 1 && i == 1)
		{
			return (_sqrt_recursion(n - 1));
		}
		else
		{
			i += 2;
			return (_sqrt_recursion(n - i));
		}
	}
}

