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

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else if (x == 0 && i == n)
	{
		return (1);
	}
	else if (x <= 1 && i == n)
	{
		return (1);
	}
	else if(x >= 1 && i == n)
	{
		return(0);
	}
	else
	{
		if (n % i == 0)
		{
			x++;
			i++;
			return (is_prime_number(n));
		}
		else
		{
			i++;
			return (is_prime_number(n));
		}
	}
}
