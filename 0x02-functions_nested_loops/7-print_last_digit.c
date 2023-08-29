#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 *print_last_digit - Print 1 if n > 0 elif n < 0 return -1 else 0
 *@int : Description of parameter x
 *
 * Return: Always 0.
 */
int print_last_digit(int);
int print_last_digit(int n)
{
	int x = abs(n) % 10;

	if (x < 0)
		x *= -1;
	_putchar('0' + x);
	return (x);
}
