#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *is_prime_number :return 0 if not prime 1 if it is
 *@n :the int to be used
 *
 * Return: Always 0.
 */

int is_prime_number(int n);
int i = 1;
int x = 0;

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
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
	else if (x >= 1 && i == n)
	{
		return (0);
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
