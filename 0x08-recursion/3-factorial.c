#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *factorial  - prints the factorial of a number
 *@n :the int to be used
 *
 * Return: Always 0.
 */

int factorial(int n);

int i = 0;

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{	
		return ( n * (factorial(n - 1)));
	}

}

