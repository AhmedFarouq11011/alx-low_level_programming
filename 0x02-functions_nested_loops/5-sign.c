#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_sign - Print 1 if n > 0 elif n < 0 return -1 else 0
 *@n : Description of parameter x
 *
 * Return: Always 0.
 */
int print_sign(int n);
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
